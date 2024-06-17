#include <iostream>
using namespace std;

int main()
{
    // // ques 1 sum of digits of a number 'n'
    // int n;
    // cin >> n;
    // int sum = 0;
    // while (n > 0)
    // {
    //     int d = n % 10;
    //     sum = sum + d;
    //     n = n / 10;
    // }
    // cout << sum;

    // // ques 2 reverse the digits of number n
    // int n;
    // cin >> n;
    // int rev = 0;
    // while (n > 0)
    // {
    //     int d = n % 10;
    //     rev = rev * 10 + d;
    //     n = n / 10;
    // }
    // cout << rev;

    // // ques 3 find nth fibonacci number
    // int n;
    // cin >> n;
    // if (n == 0 || n == 1)
    // {
    //     cout << n << endl;
    // }
    // else
    // {
    //     int a = 0;
    //     int b = 1;
    //     int i = 2;
    //     while (i <= n) // will enter the loop n-1 times
    //     {
    //         int c = a + b;
    //         a = b;
    //         b = c;

    //         i = i + 1;
    //     }
    //     cout << b;
    // }

    // // ques 4 greatest of n integers
    // int n;
    // cin >> n;
    // int i = 1;
    // int lsf = INT32_MIN;
    // while (i <= n)
    // {
    //     int x;
    //     cin >> x;
    //     if (x > lsf)
    //     {
    //         lsf = x;
    //     }
    //     i = i + 1;
    // }
    // cout << lsf << endl;

    // // ques 5 if n is a fibonacci number
    // int n;
    // cin >> n;
    // if (n == 0 || n == 1)
    // {
    //     cout << n << " is a fibonaaci number" << endl;
    // }
    // else
    // {
    //     int a = 0;
    //     int b = 1;
    //     while (true)
    //     {
    //         int c = a + b;
    //         if (c == n)
    //         {
    //             cout << " true" << endl;
    //             break;
    //         }
    //         if (c > n)
    //         {
    //             cout << " false" << endl;
    //             break;
    //         }

    //         a = b;
    //         b = c;
    //     }
    // }

    // // ques 6 square root
    // int n;
    // cin >> n;
    // double sqrt = 0;
    // while (sqrt * sqrt <= n)
    // {
    //     sqrt = sqrt + 1;
    // }
    // sqrt = sqrt - 1;
    // while (sqrt * sqrt <= n)
    // {
    //     sqrt = sqrt + 0.1;
    // }
    // sqrt = sqrt - 0.1;
    // while (sqrt * sqrt <= n)
    // {
    //     sqrt = sqrt + 0.01;
    // }
    // sqrt = sqrt - 0.01;
    // cout << sqrt << endl;
    // // or
    // int n;
    // cin >> n;
    // int p;
    // cin >> p;
    // double sqrt = 0;
    // while (sqrt * sqrt <= n)
    // {
    //     sqrt = sqrt + 1;
    // }
    // sqrt = sqrt - 1;
    // int i = 1;
    // double inc = 0.1;
    // while (i <= p)
    // {
    //     while (sqrt * sqrt <= n)
    //     {
    //         sqrt = sqrt + inc;
    //     }
    //     sqrt = sqrt - inc;
    //     inc = inc / 10;
    //     i = i + 1;
    // }
    // cout << sqrt << endl;

    // // ques 7 pattern 1
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // ques 8 pattern
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // // ques 9 pattern
    // int n;
    // cin >> n;
    // int num = 1;
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    // // ques 10 pattern
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        int num;
        if (i % 2 == 0)
        {
            num = 0;
        }
        else
        {
            num = 1;
        }

        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = 1 - num;
        }
        cout << endl;
    }

    // // ques 11 pattern
    // int n;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // ques 12 pattern
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     int num = i;
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    // // ques 13 pattern
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // // ques 14 pattern
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     ch--;
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << ch;
    //         ch--;
    //     }
    //     cout << endl;
    // }

    // // ques 15 pattern
    // int n;
    // cin >> n;
    // int m = n/2;
    // for (int i = 1; i <= m; i++)
    // {

    //     for (int j = 1; j <= m - i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= m-1; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= m - 2 * i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

        return 0;
}