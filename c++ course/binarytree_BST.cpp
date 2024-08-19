// binary search tree insertion
/*

    Design an algorithm to perform insert operation in a BST.

*/

// #include <iostream>
// #include <queue>

// using namespace std;

// class TreeNode
// {
// public:
//     int val;
//     TreeNode *left;
//     TreeNode *right;

//     TreeNode(int val)
//     {
//         this->val = val;
//         this->left = this->right = NULL;
//     }
// };

// void printInOrder(TreeNode *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     printInOrder(root->left);
//     cout << root->val << " ";
//     printInOrder(root->right);
// }

// void printLevelOrder(TreeNode *root)
// {
//     queue<TreeNode *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         TreeNode *front = q.front();
//         q.pop();
//         if (front == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << front->val << " ";
//             if (front->left)
//                 q.push(front->left);
//             if (front->right)
//                 q.push(front->right);
//         }
//     }
// }

// // time : O(h)

// TreeNode *insert(TreeNode *root, int key)
// {

//     // base case

//     if (root == NULL)
//     {

//         return new TreeNode(key);
//     }

//     // recursive case

//     if (key < root->val)
//     {

//         // recursively, insert the key in the leftSubtree which is also a BST

//         root->left = insert(root->left, key);
//     }
//     else
//     {

//         // key > root->val

//         // recursively, insert the key in the rightSubtree which is also a BST

//         root->right = insert(root->right, key);
//     }

//     return root;
// }

// int main()
// {

//     TreeNode *root = NULL;

//     root = insert(root, 10);

//     root = insert(root, 5);
//     root = insert(root, 3);
//     root = insert(root, 7);

//     root = insert(root, 15);
//     root = insert(root, 13);
//     root = insert(root, 17);

//     printLevelOrder(root);

//     cout << endl;

//     printInOrder(root); // <left> root <right> // inOrder traversal of a BST is always sorted

//     cout << endl;

//     return 0;
// }

// BST- search
/*

    Given a BST and a key, design an algorithm to search for the key in the BST.

    Output "true" is key is found otherwise output "false".

*/

#include <iostream>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        this->left = this->right = NULL;
    }
};

// time : O(h)

bool search(TreeNode *root, int key)
{

    // base case

    if (root == NULL)
    {

        return false;
    }

    // recursive case

    if (key == root->val)
    {

        return true;
    }
    else if (key < root->val)
    {

        // recursively, search for the key in the leftSubtree which is a also a BST

        return search(root->left, key);
    }
    else
    {

        // key > root->val

        // recursively, search for the key in the rightSubtree which is also a BST

        return search(root->right, key);
    }
}

int main()
{

    TreeNode *root = new TreeNode(10);

    root->left = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);

    root->right = new TreeNode(15);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(17);

    int key = 6;

    search(root, key) ? cout << "true" << endl : cout << "false" << endl;

    return 0;
}