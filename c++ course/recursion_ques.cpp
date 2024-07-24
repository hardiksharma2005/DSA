// questions for recursion

// 1. factorial of n
// #include <iostream>

// using namespace std;

// int f(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         // find 0!
//         return 1;
//     }

//     // recursive case
//     // find n!
//     // 1. ask your friend to find n-1!
//     int A = f(n - 1);

//     return n * A;
//     // return n * f(n-1);
// }

// int main()
// {

//     int n;
//     cin >> n;

//     cout << f(n) << endl;

//     return 0;
// }

// 2.fibonacci number
// #include <iostream>

// using namespace std;

// int f(int n)
// {
//     // base case
//     // if(n == 0) {
//     // 	// find the 0th fib. no.
//     // 	return 0;
//     // }
//     // if(n == 1) {
//     // 	// find the 1st fib. no.
//     // 	return 1;
//     // }
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }

//     // recursive case
//     // find the nth fib. no.

//     // 1. ask your friend to find the n-1th fib. no.
//     int A = f(n - 1);

//     // 2. ask your friend to find the n-2th fib. no.
//     int B = f(n - 2);

//     return A + B;
//     // return f(n-1) + f(n-2);
// }

// int main()
// {
//     int n = 5;

//     cout << f(n) << endl;

//     return 0;
// }

// 3. product of two numbers
// #include <iostream>

// using namespace std;

// int f(int x, int y)
// {
//     // base case
//     if (y == 0)
//     {
//         // find x * 0
//         return 0;
//     }

//     // recursive case
//     // find x * y
//     // 1. ask your friend to find x * (y-1)
//     int A = f(x, y - 1);

//     return x + A;
// }

// int main()
// {
//     int x, y;
//     cin >> x >> y;

//     cout << f(x, y) << endl;

//     return 0;
// }

// 4. print n numbers in increasing order
// #include <iostream>

// using namespace std;

// void f(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         // print nos. from 1 to 0 in inc. order
//         return;
//     }

//     // recursive case
//     // print nos. from 1 to n in the inc. order
//     // 1. ask your friend to print nos. from 1 to n-1 in the inc. order
//     f(n - 1);

//     cout << n << " ";
// }

// int main()
// {
//     int n;
//     cin >> n;

//     f(n);

//     return 0;
// }

// 5. print n numbers in decreasing order
// #include <iostream>

// using namespace std;

// void f(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         // print nos. from 0 to 1 in dec. order
//         return;
//     }

//     // recursive case
//     // print nos. from n to 1 in the dec. order
//     cout << n << " ";

//     // 2. ask your friend to print nos. from n-1 to 1 in the decc. order
//     f(n - 1);
// }

// int main()
// {
//     int n;
//     cin >> n;

//     f(n);

//     return 0;
// }

// 6.0 power (x^y)
// #include <iostream>

// using namespace std;

// int f(int x, int y)
// {
//     // base case
//     if (y == 0)
//     {
//         // find x^0
//         return 1;
//     }

//     // recursive case
//     // find x^y
//     // 1. ask your friend to find x^(y-1)
//     int A = f(x, y - 1);

//     return x * A;
// }

// int main()
// {
//     int x, y;
//     cin >> x >> y;

//     cout << f(x, y) << endl;

//     return 0;
// }

// // 6.1 power optimised (x^y)
// #include <iostream>

// using namespace std;

// int f(int x, int y)
// {
//     // base case
//     if (y == 0)
//     {
//         // find x^0
//         return 1;
//     }

//     // recursive case
//     // find x^y
//     // 1. ask your friend to find  x^(y/2)
//     int A = f(x, y / 2);

//     if (y % 2 == 0)
//     {
//         // y is even
//         return A * A;
//     }

//     // y is odd
//     return A * A * x;
// }

// int main()
// {
//     int x, y;
//     cin >> x >> y;

//     cout << f(x, y) << endl;

//     return 0;
// }

// 7. spell number
// #include <iostream>

// using namespace std;

// string spellingMap[] = {"zero", "one", "two", "three",
//                         "four", "five", "six", "seven",
//                         "eight", "nine"};

// void f(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         return;
//     }

//     // recursive case
//     // print the spelling of n

//     // 1. ask your friend to print the spelling of n/10
//     f(n / 10);

//     // 2. print the spelling of the digit at the one's place i.e rightmost digit
//     int d = n % 10;

//     cout << spellingMap[d] << " ";
// }

// int main()
// {
//     int n;
//     cin >> n;

//     f(n);

//     return 0;
// }

// 8. string to integer
// #include <iostream>

// using namespace std;

// int f(string str, int n)
// {
//     // base case
//     if (n == 0)
//     { // str == "" // str.empty()
//         // convert empty string into an integer
//         return 0;
//     }

//     // if(n == 1) {
//     // 	// convert a string of length 1 into an integer
//     // 	return str[0]-'0';
//     // }

//     // recursive case
//     // convert str[0...n-1] into an integer
//     // 1. ask your friend to convert str[0...n-2] into an integer
//     string subString = str.substr(0, n - 1);
//     int integerFromMyFriend = f(subString, n - 1);

//     return integerFromMyFriend * 10 + (str[n - 1] - '0');
// }

// int main()
// {
//     string str;
//     cin >> str;

//     int n = str.size();

//     cout << f(str, n) << endl;

//     return 0;
// }

// 9.0 string sum (1st approach)
// #include <iostream>

// using namespace std;

// int f(int X[], int n, int i)
// {
//     // base case
//     // if (i == n - 1)
//     // {
//     //     // find the sum(X[n-1...n-1]) = {X[n-1]}
//     //     return X[n - 1];
//     // }
//     if (i == n)
//     {
//         // find the sum(X[n...n-1]) = sum({})
//         return 0;
//     }

//     // recursive case
//     // find the sum(X[i...n-1])

//     // 1. ask your friend to find the sum(X[i+1...n-1])
//     int A = f(X, n, i + 1);

//     return X[i] + A;
// }

// int main()
// {
//     int X[] = {10, 20, 30, 40, 50};
//     int n = sizeof(X) / sizeof(int);

//     cout << f(X, n, 0) << endl;

//     return 0;
// }

// 9.1 array sum(2nd approach)
// #include <iostream>

// using namespace std;

// int f(int X[], int i)
// {
//     // base case
//     // if (i == 0)
//     // {
//     //     // find the sum(X[0...0]) = sum({X[0]})
//     //     return X[0];
//     // }
//     if (i == -1)
//     {
//         // find the sum(X[0...-1]) = sum({})
//         return 0;
//     }

//     // recursive case
//     // find the sum(X[0...i])

//     // 1. ask your friend to find the sum(X[0...i-1])
//     int A = f(X, i - 1);

//     return A + X[i];
// }

// int main()
// {
//     int X[] = {1, 2, 3, 4, 5};
//     int n = sizeof(X) / sizeof(int);

//     cout << f(X, n - 1) << endl;

//     return 0;
// }

// 10. first occurence
// #include <iostream>

// using namespace std;

// int f(int X[], int n, int t, int i)
// {
//     // base case
//     // if (i == n - 1) {
//     // 	// find the index of the 1st occ. of the t in X[n-1...n-1] = {X[n-1]}
//     // 	return X[n - 1] == t ? n - 1 : -1;
//     // }
//     if (i == n)
//     {
//         // find the index of the 1st occ. of the t in X[n...n-1] = {}
//         return -1;
//     }

//     // recursive case
//     // find the index of the 1st occ. of the t in X[i...n-1]
//     if (X[i] == t)
//     {
//         // you've foundt the t at the ith index
//         return i;
//     }

//     // ask your friend to find the index of the 1st occ. of the t in X[i+1...n-1]
//     return f(X, n, t, i + 1);
// }

// int main()
// {
//     int X[] = {10, 20, 30, 20, 30};
//     int n = sizeof(X) / sizeof(int);

//     int t = 100;

//     cout << f(X, n, t, 0) << endl;

//     return 0;
// }

// 11.0 all occurences
// #include <iostream>

// using namespace std;

// bool flag = false; // assume t is not present in X[]

// void f(int X[], int n, int t, int i)
// {
//     // base case
//     if (i == n)
//     {
//         if (flag == false)
//         {
//             // t is not present in X[]
//             cout << -1;
//         }
//         return;
//     }

//     // recursive case
//     if (X[i] == t)
//     {
//         flag = true;
//         cout << i << " ";
//     }

//     f(X, n, t, i + 1);
// }

// int main()
// {
//     int X[] = {10, 20, 30, 20, 30};
//     int n = sizeof(X) / sizeof(int);
//     int t = 100;

//     f(X, n, t, 0);

//     return 0;
// }

// 11.1 all occurence using vector
// #include <iostream>
// #include <vector>

// using namespace std;

// void f(int X[], int n, int t, int i, vector<int> &ans)
// {
//     // base case
//     if (i == n)
//     {
//         return;
//     }

//     // recursive case
//     if (X[i] == t)
//     {
//         ans.push_back(i);
//     }

//     f(X, n, t, i + 1, ans);
// }

// int main()
// {
//     int X[] = {10, 20, 30, 20, 30};
//     int n = sizeof(X) / sizeof(int);
//     int t = 200;

//     vector<int> ans;

//     f(X, n, t, 0, ans);

//     if (ans.empty())
//     { // ans.size() == 0
//         cout << -1 << endl;
//     }
//     else
//     {
//         for (int idx : ans)
//         {
//             cout << idx << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 12 check sorted
// #include <iostream>

// using namespace std;

// bool isSorted(int X[], int n, int i)
// {
//     // base case
//     if (i == n - 1)
//     {
//         // check if X[n-1...n-1] = {X[n-1]}
//         return true;
//     }

//     // recursive case
//     // check if X[i...n-1] is sorted ?
//     return X[i] < X[i + 1] and isSorted(X, n, i + 1);
// }

// int main()
// {
//     int X[] = {1, 2, 3, 4, 5};
//     int n = sizeof(X) / sizeof(int);

//     isSorted(X, n, 0) ? cout << "true" << endl : cout << "false" << endl;

//     return 0;
// }

// 13 binary search
#include <iostream>

using namespace std;

// time : O(logn)

int f(int arr[], int t, int s, int e)
{
    // base case
    if (s > e)
    {
        // search space is empty
        return -1;
    }

    // recursive case
    // search for t in sorted arr[s...e] using binary search
    int m = s + (e - s) / 2;
    if (arr[m] == t)
    {
        return m;
    }
    else if (t > arr[m])
    {
        // recursively, search for t in sorted arr[m+1...e]
        return f(arr, t, m + 1, e);
    }
    else
    {
        // t < arr[m]
        // recursively, search for t in sorted arr[s...m-1]
        return f(arr, t, s, m - 1);
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    int t = 100;

    cout << f(arr, t, 0, n - 1) << endl;

    return 0;
}