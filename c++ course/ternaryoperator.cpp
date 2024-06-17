#include <iostream>
using namespace std;

int main()
{
    // // example 1:
    // int i;
    // cin >> i;
    // int j = i % 2 == 0 ? 1 : 0;
    // cout << "j = " << j << endl;

    // example 2:
    int i;
    cin >> i;
    i > 0 ? cout << "+ive" : i < 0 ? cout << "-ive"
                                   : cout << "zero";
    return 0;
}