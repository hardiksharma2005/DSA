#include <iostream>
using namespace std;

class treenode
{
public:
    int val;
    treenode *left;
    treenode *right;

    treenode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

treenode *insert(treenode *root, int key)
{
    // base case
    if (root == NULL)
    {
        return new treenode(key);
    }

    // recursion case
    if (key < root->val)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }

    return root;
}
int main()
{
    int n;
    cin >> n;
    treenode *root = NULL;
    while (n--)
    {
        int key;
        cin >> key;
        root = insert(root, key);
    }

    return 0;
}