#include <iostream>
using namespace std;

// bool isgoodstring(string str, int n)
// {
//     for (char ch : str)
//     {
//         if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int longestgoodsubstring(string str, int n)
// {
//     int maxsofar = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             string substring = str.substr(i, j - i + 1);
//             if (isgoodstring(substring, n))
//             {
//                 maxsofar = max(maxsofar, j - i + 1);
//             }
//         }
//     }
//     return maxsofar;
// }

int main()
{
    string str = "cbaeicdeiou";
    int n = str.size();

    // cout << longestgoodsubstring(str, n);

    // an optimised aproach:
    int maxsofar = 0;
    int cnt = 0;

    for (char ch : str)
    {
        if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
        {
            cnt++;
            maxsofar = max(maxsofar, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    cout << maxsofar << endl;
    return 0;
}