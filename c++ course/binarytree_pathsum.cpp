// path sum-1
// we want to check if there exists a path from root to leaf that sum upto target
// #include <iostream>

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
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// bool hasPathSum(TreeNode *root, int targetSum)
// {

//     // base case

//     if (root == NULL)
//     {
//         return false;
//     }

//     if (root->left == NULL and root->right == NULL)
//     {

//         if (root->val == targetSum)
//         {
//             // you've found a valid root-to-leaf path
//             return true;
//         }

//         return false;
//     }

//     // recursive case

//     // check if there exists a root-to-leaf path in the given tree whose sum is equal to targetSum

//     return hasPathSum(root->left, targetSum - root->val) or hasPathSum(root->right, targetSum - root->val);
// }

// int main()
// {

//     TreeNode *root = NULL;

//     root = new TreeNode(5);

//     root->left = new TreeNode(4);
//     root->left->left = new TreeNode(11);
//     root->left->left->left = new TreeNode(7);
//     root->left->left->right = new TreeNode(2);

//     root->right = new TreeNode(8);
//     root->right->left = new TreeNode(13);
//     root->right->right = new TreeNode(4);
//     root->right->right->right = new TreeNode(1);

//     int targetSum = 30;

//     hasPathSum(root, targetSum) ? cout << "true" << endl : cout << "false" << endl;

//     return 0;
// }

// Path sum - 2
// in this we will have to print the path
// #include <iostream>
// #include <vector>

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
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// void helper(TreeNode *root, int targetSum, vector<int> &path, vector<vector<int>> &allPaths)
// {

//     // base case

//     if (root == NULL)
//     {
//         return;
//     }

//     if (root->left == NULL and root->right == NULL)
//     {

//         if (root->val == targetSum)
//         {
//             // you've found a valid path
//             path.push_back(root->val);
//             allPaths.push_back(path);
//             path.pop_back();
//         }

//         return;
//     }

//     // recursive case

//     path.push_back(root->val);
//     helper(root->left, targetSum - root->val, path, allPaths);
//     helper(root->right, targetSum - root->val, path, allPaths);
//     path.pop_back(); // backtracking
// }

// vector<vector<int>> pathSum(TreeNode *root, int targetSum)
// {

//     vector<vector<int>> allPaths;
//     vector<int> path;
//     helper(root, targetSum, path, allPaths);
//     return allPaths;
// }

// int main()
// {

//     TreeNode *root = NULL;

//     root = new TreeNode(5);

//     root->left = new TreeNode(4);
//     root->left->left = new TreeNode(11);
//     root->left->left->left = new TreeNode(7);
//     root->left->left->right = new TreeNode(2);

//     root->right = new TreeNode(8);
//     root->right->left = new TreeNode(13);
//     root->right->right = new TreeNode(4);
//     root->right->right->left = new TreeNode(5);
//     root->right->right->right = new TreeNode(1);

//     int targetSum = 22;

//     vector<vector<int>> allPaths = pathSum(root, targetSum);

//     for (vector<int> path : allPaths)
//     {
//         for (int nodeVal : path)
//         {
//             cout << nodeVal << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// root path sum
//  is this we will have to count the paths but path can end at any node
// #include <iostream>
// #include <vector>

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
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// int countPaths(TreeNode *root, int targetSum)
// {

//     // base case

//     if (root == NULL)
//     {
//         return 0;
//     }

//     // recursive case

//     // count no. of paths in the given tree that start at the root and whose sum is equal to targetSum

//     int cnt = 0;

//     // 1. ask your friend to count no. of paths in the leftSubtree that start at the root and whose sum is equal to targetSum-root->val

//     cnt += countPaths(root->left, targetSum - root->val);

//     // 2. ask your friend to count no. of paths in the rightSubtree that start at the root and whose sum is equal to targetSum-root->val

//     cnt += countPaths(root->right, targetSum - root->val);

//     if (root->val == targetSum)
//     {
//         cnt++;
//     }

//     return cnt;
// }

// int main()
// {

//     TreeNode *root = NULL;

//     root = new TreeNode(2);

//     root->left = new TreeNode(7);
//     root->left->left = new TreeNode(3);
//     root->left->left->left = new TreeNode(1);
//     root->left->left->right = new TreeNode(8);
//     root->left->right = new TreeNode(3);

//     root->right = new TreeNode(6);
//     root->right->left = new TreeNode(4);
//     root->right->right = new TreeNode(5);

//     // root = new TreeNode(4);

//     // root->left = new TreeNode(7);
//     // root->left->left = new TreeNode(3);
//     // root->left->left->left = new TreeNode(1);
//     // root->left->left->right = new TreeNode(8);
//     // root->left->right = new TreeNode(3);

//     // root->right = new TreeNode(6);
//     // root->right->left = new TreeNode(4);
//     // root->right->right = new TreeNode(5);

//     int targetSum = 12;

//     cout << countPaths(root, targetSum) << endl;

//     return 0;
// }

// path sum -3
//  path can star at any node and end at any node
#include <iostream>
#include <vector>

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
        this->left = NULL;
        this->right = NULL;
    }
};

int countPaths(TreeNode *root, int targetSum)
{

    // base case

    if (root == NULL)
    {
        return 0;
    }

    // recursive case

    // count no. of paths in the given tree that start at the root and whose sum is equal to targetSum

    int cnt = 0;

    // 1. ask your friend to count no. of paths in the leftSubtree that start at the root and whose sum is equal to targetSum-root->val

    cnt += countPaths(root->left, targetSum - root->val);

    // 2. ask your friend to count no. of paths in the rightSubtree that start at the root and whose sum is equal to targetSum-root->val

    cnt += countPaths(root->right, targetSum - root->val);

    if (root->val == targetSum)
    {
        cnt++;
    }

    return cnt;
}

int pathSum(TreeNode *root, int targetSum)
{

    // base case
    if (root == NULL)
    {
        return 0;
    }

    // recursive case

    // count no. of paths in the given tree whose sum is equal to targetSum

    int cnt = 0;

    // a. use the root node

    // 1. count no. of paths in the given tree that start at root and whose sum is equal to targetSum

    cnt += countPaths(root, targetSum);

    // b. don't use the root node

    // 2. recursively, count no. of paths in the leftSubtree whose sum is equal to targetSum

    cnt += pathSum(root->left, targetSum);

    // 3. recursively, count no. of paths in the righSubtree whose sum is equal to targetSum

    cnt += pathSum(root->right, targetSum);

    return cnt;
}

int main()
{

    TreeNode *root = NULL;

    root = new TreeNode(10);

    root->left = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(3);
    root->left->left->right = new TreeNode(-2);
    root->left->right = new TreeNode(2);
    root->left->right->right = new TreeNode(1);

    root->right = new TreeNode(8);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);

    int targetSum = 8;

    cout << pathSum(root, targetSum) << endl;

    return 0;
}