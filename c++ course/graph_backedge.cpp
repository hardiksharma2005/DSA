/*

Given an directed graph, check if there exists a back-edge or not.

*/

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <list>

using namespace std;

template <typename T>
class graph
{

    unordered_map<T, list<T>> neighbourMap; // to store the graph representation

public:
    void addEdge(T u, T v)
    {
        // add a directed edge between vertex 'u' and 'v'
        neighbourMap[u].push_back(v);
    }

    bool dfsHelper(T source,
                   unordered_set<T> &visited,
                   unordered_set<T> &stackState)
    {

        // mark 'source' as visited
        visited.insert(source);

        // add 'source' to the stackState
        stackState.insert(source);

        // visit unvisited vertices reachable from 'source'
        list<T> neighbourList = neighbourMap[source];
        for (T neighbour : neighbourList)
        {
            if (visited.find(neighbour) == visited.end())
            {
                // neighbour is unvisited

                if (dfsHelper(neighbour, visited, stackState))
                {
                    return true; // you've found a backedge in the sub-component of the neighbour i.e. you've found a backedge in the given component
                }
            }
            else
            {
                // neighbour is visited

                // check source -> neighbour is a backedge ?

                // this will be a backedge if there is a directed path from neighbour to source

                // i.e. neighbour is the ancestor of source in the dfsTree

                if (stackState.find(neighbour) != stackState.end())
                {

                    // while standing at source, neighbour is present on the function call stack therefore source -> neighbour is a backedge

                    return true;
                }
            }
        }

        // remove 'source' from statckState
        stackState.erase(source); // v.imp

        return false;
    }

    bool isBackEdgePresent()
    {
        bool flag = false;           // assume back-edge is not present
        unordered_set<T> visited;    // to keep track of visited vertices
        unordered_set<T> stackState; // to keep track of vertices that are
        // present on the function call stack

        for (pair<T, list<T>> p : neighbourMap)
        {
            T vertexLabel = p.first;
            if (visited.find(vertexLabel) == visited.end())
            {
                // check if a back-edge is in the component which contains 'vertex'
                if (dfsHelper(vertexLabel, visited, stackState))
                {
                    flag = true;
                    break;
                }
            }
        }

        return flag;
    }
};

int main()
{

    graph<char> g;

    g.addEdge('A', 'B');
    g.addEdge('B', 'C');
    g.addEdge('C', 'D');
    // g.addEdge('D', 'A');

    g.isBackEdgePresent() ? cout << "back-edge found!" << endl : cout << "back-edge not found!" << endl;

    return 0;
}