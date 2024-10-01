#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

// Definition of a tree node
struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to insert nodes in the BST
TreeNode *insert(TreeNode *root, int val)
{
    if (!root)
        return new TreeNode(val);
    if (val < root->val)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

// Function to find the target node and map parent pointers
void findParent(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parentMap, int target)
{
    if (!root)
        return;
    if (root->val == target)
        return;

    if (root->left)
    {
        parentMap[root->left] = root;
        findParent(root->left, parentMap, target);
    }
    if (root->right)
    {
        parentMap[root->right] = root;
        findParent(root->right, parentMap, target);
    }
}

// Function to find all nodes at distance k
vector<int> nodesAtDistanceK(TreeNode *target, unordered_map<TreeNode *, TreeNode *> &parentMap, int k)
{
    vector<int> result;
    unordered_map<TreeNode *, bool> visited;
    queue<TreeNode *> q;

    q.push(target);
    visited[target] = true;

    int currentDistance = 0;

    while (!q.empty())
    {
        int size = q.size();
        if (currentDistance == k)
            break;

        for (int i = 0; i < size; ++i)
        {
            TreeNode *node = q.front();
            q.pop();

            // Check left child
            if (node->left && !visited[node->left])
            {
                q.push(node->left);
                visited[node->left] = true;
            }
            // Check right child
            if (node->right && !visited[node->right])
            {
                q.push(node->right);
                visited[node->right] = true;
            }
            // Check parent
            if (parentMap[node] && !visited[parentMap[node]])
            {
                q.push(parentMap[node]);
                visited[parentMap[node]] = true;
            }
        }
        currentDistance++;
    }

    // Collect results at distance k
    while (!q.empty())
    {
        result.push_back(q.front()->val);
        q.pop();
    }

    return result;
}

int main()
{
    int N;
    cin >> N;

    TreeNode *root = NULL;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        root = insert(root, val);
    }

    int target, k;
    cin >> target >> k;

    unordered_map<TreeNode *, TreeNode *> parentMap;
    findParent(root, parentMap, target);

    TreeNode *targetNode = nullptr;
    queue<TreeNode *> searchQueue;
    searchQueue.push(root);
    while (!searchQueue.empty() && !targetNode)
    {
        TreeNode *node = searchQueue.front();
        searchQueue.pop();
        if (node->val == target)
        {
            targetNode = node;
        }
        else
        {
            if (node->left)
                searchQueue.push(node->left);
            if (node->right)
                searchQueue.push(node->right);
        }
    }

    if (targetNode)
    {
        vector<int> result = nodesAtDistanceK(targetNode, parentMap, k);
        for (int val : result)
        {
            cout << val << endl;
        }
    }
    else
    {
        cout << "Target node not found in the BST." << endl;
    }

    return 0;
}