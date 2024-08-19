/*

    Implementation of the heap/priority_queue data structure.

*/

#include <iostream>
#include <vector>

using namespace std;

// min heap class
class minHeap
{

    vector<int> v;

    void heapify(int i)
    { // [HW] try to impl. heapify iteratively

        // fix the heap propery at the ith index

        int minIdx = i;

        int leftIdx = 2 * i + 1;
        if (leftIdx < v.size() and v[leftIdx] < v[minIdx])
        {
            minIdx = leftIdx;
        }

        int rightIdx = 2 * i + 2;
        if (rightIdx < v.size() and v[rightIdx] < v[minIdx])
        {
            minIdx = rightIdx;
        }

        // base case : if minIdx is equal to i that means heap property is not violated at the ith index so we can stop making recursive calls

        if (minIdx != i)
        {
            swap(v[i], v[minIdx]);
            heapify(minIdx);
        }
    }

public:
    // time : O(logn)

    void push(int val)
    {

        v.push_back(val);

        int childIdx = v.size() - 1;
        int parentIdx = childIdx % 2 == 1 ? childIdx / 2 : childIdx / 2 - 1;

        while (childIdx != 0 and v[childIdx] < v[parentIdx])
        {
            swap(v[childIdx], v[parentIdx]);
            childIdx = parentIdx;
            parentIdx = childIdx % 2 == 1 ? childIdx / 2 : childIdx / 2 - 1;
        }
    }

    // time : O(logn)

    void pop()
    {

        swap(v[0], v[v.size() - 1]); // const
        v.pop_back();                // const
        heapify(0);                  // logn
    }

    // time : O(1)

    int top()
    {
        return v[0];
    }

    // time : O(1)

    int size()
    {
        return v.size();
    }

    // time : O(1)
    bool empty()
    {
        return v.empty();
    }
};

// max heap class
class maxHeap
{
    vector<int> v;

    void heapify(int i)
    { // [HW] try to impl. heapify iteratively

        // fix the heap propery at the ith index

        int maxIdx = i;

        int leftIdx = 2 * i + 1;
        if (leftIdx < v.size() and v[leftIdx] > v[maxIdx])
        {
            maxIdx = leftIdx;
        }

        int rightIdx = 2 * i + 2;
        if (rightIdx < v.size() and v[rightIdx] > v[maxIdx])
        {
            maxIdx = rightIdx;
        }

        // base case : if maxIdx is equal to i that means heap property is not violated at the ith index so we can stop making recursive calls

        if (maxIdx != i)
        {
            swap(v[i], v[maxIdx]);
            heapify(maxIdx);
        }
    }

public:
    // time : O(logn)

    void push(int val)
    {

        v.push_back(val);

        int childIdx = v.size() - 1;
        int parentIdx = childIdx % 2 == 1 ? childIdx / 2 : childIdx / 2 - 1;

        while (childIdx != 0 and v[childIdx] > v[parentIdx])
        {
            swap(v[childIdx], v[parentIdx]);
            childIdx = parentIdx;
            parentIdx = childIdx % 2 == 1 ? childIdx / 2 : childIdx / 2 - 1;
        }
    }

    // time : O(logn)

    void pop()
    {

        swap(v[0], v[v.size() - 1]); // const
        v.pop_back();                // const
        heapify(0);                  // logn
    }

    // time : O(1)

    int top()
    {
        return v[0];
    }

    // time : O(1)

    int size()
    {
        return v.size();
    }

    // time : O(1)
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    // min heap implementation
    minHeap m1;

    m1.push(9);
    m1.push(7);
    m1.push(8);
    m1.push(5);
    m1.push(4);
    m1.push(6);
    m1.push(3);
    m1.push(2);
    m1.push(1);

    cout << m1.size() << endl;

    while (!m1.empty())
    {
        cout << m1.top() << " ";
        m1.pop();
    }

    cout << endl;

    cout << m1.size() << endl;

    // maxheap implementation
    maxHeap m2;

    m2.push(9);
    m2.push(7);
    m2.push(8);
    m2.push(5);
    m2.push(4);
    m2.push(6);
    m2.push(3);
    m2.push(2);
    m2.push(1);

    cout << m2.size() << endl;

    while (!m2.empty())
    {
        cout << m2.top() << " ";
        m2.pop();
    }

    cout << endl;

    cout << m2.size() << endl;

    return 0;
}