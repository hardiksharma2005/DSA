#include <iostream>
using namespace std;

void generatesubstring(string str, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // for (int k = i; k <= j; k++)
            // {
            //     cout << str[k];
            // }
            // cout << endl;
            cout << str.substr(i, j - i + 1) << endl;
        }
        cout << endl;
    }
}

int main()
{
    string str = "abcde";
    int n = str.size();

    generatesubstring(str, n);
    return 0;
}