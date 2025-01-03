/*

    https://cplusplus.com/reference/set/set/?kw=set
    https://cplusplus.com/reference/set/multiset/?kw=multiset

    > insert/erase/find is logarithmic i.e. O(logn)
    > values are inserted in the sorted order
    > set contains only distinct values
    > multiset allows duplicate values

*/

#include <iostream>
#include <set>

using namespace std;

int main()
{

    set<int> s;
    // multiset<int> s;

    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(1);

    cout << "size : " << s.size() << endl;

    s.erase(5);

    cout << "size : " << s.size() << endl;

    for (auto it = s.begin(), end = s.end(); it != end; it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    for (int x : s)
    {
        cout << x << " ";
    }

    cout << endl;

    if (s.find(3) != s.end())
    {
        cout << "3 is present" << endl;
    }
    else
    {
        cout << "3 is absent" << endl;
    }

    if (s.count(5))
    {
        cout << "5 is present" << endl;
    }
    else
    {
        cout << "5 is absent" << endl;
    }

    s.clear();

    cout << "size : " << s.size() << endl;

    s.empty() ? cout << "s is empty" << endl : cout << "s is not empty" << endl;

    return 0;
}

// Q. generate subsequences
/*

Given a string of length n, generate all of its subsequences.

A subsequence of a given string (sequence) is a string (sequence) that is generated by
removing zero or more characters from the given string (sequence) without changing its
order.

Example

    Input : inp[] = "abc"
    Output: ["", "c", "b", "bc", "a", "ac", "ab", "abc"]

Constraints

  1 < n < 10

*/

// #include <iostream>
// #include <set>

// using namespace std;

// void f(char inp[], char out[], int i, int j, set<string> &s)
// {

//     // base case

//     if (inp[i] == '\0')
//     { // i == n
//         out[j] = '\0';

//         // string outStr(out);
//         // s.insert(outStr);

//         s.insert(string(out));

//         // cout << out << endl;

//         return;
//     }

//     // recursive case

//     // make a decision for inp[i]

//     // option 1 - include inp[i] in out[]

//     out[j] = inp[i];
//     f(inp, out, i + 1, j + 1, s);

//     // option 2 - exclude inp[i] from out[]

//     f(inp, out, i + 1, j, s);
// }

// int main()
// {

//     char inp[] = "abc";
//     char out[10];
//     set<string> s;

//     f(inp, out, 0, 0, s);

//     for (string subseq : s)
//     {
//         cout << subseq << endl;
//     }

//     return 0;
// }