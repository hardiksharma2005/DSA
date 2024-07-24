#include <iostream>
using namespace std;

// good string is that string which only contains vowels {a,e,i,o,u}
bool isgoodstring(string str, int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = str[i];
    //     if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
    //     {
    //         // ch is constant
    //         return false;
    //     }
    // }
    // return true;

    for (char ch : str)
    {
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str = "uoxea";
    int n = str.size();

    isgoodstring(str, n) ? cout << "good" << endl : cout << "not good" << endl;
    return 0;
}