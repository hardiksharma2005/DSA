#include <iostream>
using namespace std;

int main()
{
    int a = 25;
    int b = 19;

    cout << (a & b) << endl;  // bitwise AND (&) operator
    cout << (a | b) << endl;  // bitwise OR (|) operator
    cout << (a ^ b) << endl;  // bitwise XOR (^) operator
    cout << (~a) << endl;     // bitwise NOT (~) operator
    cout << (a << 1) << endl; // bitwise left shift (<<) operator
    cout << (a >> 1) << endl; // bitwise right shift (>>) operator

    // ques 1 unique number
    // int n;
    // cin >> n;
    // int ans = 0; // we will use XOR properties
    // for (int i = 1; i <= n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     ans = ans ^ x;
    // }
    // cout << ans;

    // ques 2 check odd or even using bitwise operator
    // for odd number lsb(or 0th bit) =1
    // for even number lsb(or 0th bit) =0
    int n;
    cin >> n;
    // '1' is also called as "mask" because it kind of nullifies the other digit of the number
    // it has only one digit as 1 ,all the other digit are 0
    if (n & 1 == 1) //'1' binary is 0001
    {
        cout << n << " is odd" << endl;
    }
    else
    {
        cout << n << " is even" << endl;
    }

    return 0;
}