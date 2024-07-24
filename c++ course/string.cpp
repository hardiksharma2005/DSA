#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hellolo";
    int n = str.size();
    cout << n << endl;
    // string str1;
    // cin >> str1;
    // cout << str1 << endl;
    string str2;
    getline(cin, str2);
    cout << str2 << endl;
    str = str + str2;
    cout << str << endl;
    string t = "lo";
    cout << str.find(t) << endl;
    cout << str.rfind(t) << endl;
    string ss = str.substr(2, 2);
    cout << ss << endl;
    return 0;
}