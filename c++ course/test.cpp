#include <iostream>

using namespace std;

bool check(string str, int i, char last)
{
    //base call
    if (str[i] == '\0')
    {
        return true;
    }

    //recursion call
    if (i == 0 && str[i] == 'a')
    {
        return check(str, i + 1, 'a');
    }
    if (str[i] == 'b' && str[i + 1] == 'b' && last == 'a')
    {
        return check(str, i + 2, 'b');
    }
    if (last == 'b' && str[i] == 'a')
    {
        return check(str, i + 1, 'a');
    }
    if (last == 'a' && str[i] == 'a')
    {
        return check(str, i + 1, 'a');
    }

    return false;
}

int main()
{
    string str;
    cin >> str;

    if (check(str, 0, 'a'))
        cout << "true";
    else
        cout << "false";
}