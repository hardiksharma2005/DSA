/*

Given a string (sequence of characters) of length n, generate all of its permutations.

Example

    Input : inp[] = "abc"
    Output: ["abc", "acb", "bac", "bca", "cba", "cab"]

*/

// #include <iostream>
// #include <cstring>

// using namespace std;

// void f(char inp[], int n, int i)
// {
//     // base case
//     if (i == n)
//     {
//         cout << inp << endl;
//         return;
//     }

//     // recursive case
//     // decide for ith position

//     // swap(inp[i], inp[i])
//     // swap(inp[i], inp[i+1])
//     // swap(inp[i], inp[i+2])
//     // ...
//     // swap(inp[i], inp[n-1])

//     // swap(inp[i], inp[j]) i <= j <= n-1

//     for (int j = i; j <= n - 1; j++)
//     {
//         swap(inp[i], inp[j]);
//         f(inp, n, i + 1);
//         swap(inp[i], inp[j]); // backtracking
//     }
// }

// int main()
// {

//     char inp[] = "abc";
//     int n = strlen(inp);

//     f(inp, n, 0);

//     return 0;
// }

// Q. unique permutations
/*

Given a string (sequence of characters) of length n, generate all of its permutations.

Example

    Input : inp[] = "abc"
    Output: ["abc", "acb", "bac", "bca", "cba", "cab"]

*/

// #include <iostream>
// #include <cstring>
// #include <set>

// using namespace std;

// void f(char inp[], int n, int i)
// {

//     // base case

//     if (i == n)
//     {
//         cout << inp << endl;
//         return;
//     }

//     // recursive case

//     // decide for ith position

//     for (int j = i; j <= n - 1; j++)
//     {

//         // can you bring inp[j] to the ith position ?

//         bool flag = true; // assume you can bring inp[j] to the ith position

//         for (int k = j + 1; k < n; k++)
//         {
//             if (inp[k] == inp[j])
//             {
//                 flag = false;
//                 break;
//             }
//         }

//         if (flag)
//         {
//             swap(inp[i], inp[j]);
//             f(inp, n, i + 1);
//             swap(inp[i], inp[j]); // backtracking
//         }
//     }
// }

// int main()
// {

//     char inp[] = "aabc";
//     int n = strlen(inp);

//     f(inp, n, 0);

//     return 0;
// }

// permutations sum
#include <iostream>
#include <vector>

using namespace std;

void generatePermutations(int t, const vector<int> &c, vector<int> &perm)
{
    // base case
    if (t == 0)
    {
        for (int i = 0; i < perm.size(); i++)
        {
            cout << perm[i] << " ";
        }
        cout << endl;
        return;
    }

    // recursion case

    // generate permutations of 'c' that sums up to 't' or choose candidates that sum up to 't'

    // decide the next candidate

    // for (int j = 0; j < c.size(); j++) {

    // 	if (c[j] <= t) {

    // 		perm.push_back(c[j]);
    // 		generatePermutations(t - c[j], c, perm);
    // 		perm.pop_back(); // backtracking

    // 	}

    // }

    for (int j = 0; j < c.size(); j++)
    {
        if (c[j] <= t)
        {
            perm.push_back(c[j]);
            t = t - c[j];
            generatePermutations(t, c, perm);
            t = t + c[j];    // backtracking
            perm.pop_back(); // backtracking
        }
    }
}

int main()
{

    vector<int> c = {2, 3, 5, 7};
    int t = 7;

    vector<int> perm; // to track the permutation that sums up to 't'

    generatePermutations(t, c, perm);

    return 0;
}