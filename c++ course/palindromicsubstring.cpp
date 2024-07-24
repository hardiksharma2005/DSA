#include <iostream>
#include <string>
using namespace std;

bool ispalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int countpalindromicsubstring(string s)
{
    int count = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string substring = s.substr(i, j - i + 1);
            if (ispalindrome(substring))
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    string s = "abaaba";
    cout << countpalindromicsubstring(s) << endl;
    return 0;
}