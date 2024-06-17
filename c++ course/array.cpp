#include <iostream>
using namespace std;

int main()
{
    // int arr[5];
    // cout << sizeof(arr) << "B" << endl;
    // char str[10];
    // cout << sizeof(str) << "B" << endl;
    // int A[5] = {};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << A[i] << " ";
    // }
    // cout << endl;
    // int B[5] = {0};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << B[i] << " ";
    // }
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << endl;
    // // printing in reverse order
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }

    // ques1 first occurence of target
    // int a;
    // cin >> a;
    // int arr1[a];
    // for (int i = 0; i < a; i++)
    // {
    //     cin >> arr1[i];
    // }
    // cout << endl;
    // int t;
    // cout << "Enter the target" << endl;
    // cin >> t;
    // int i;
    // for (i = 0; i < a; i++)
    // {
    //     if (arr1[i] == t)
    //     {
    //         cout << t << " target found " << i << endl;
    //         break;
    //     }
    // }
    // if (i == a)
    // {
    //     cout << t << " not found";
    // }

    // ques 2 last occurence of target
    // int arr[] = {10, 20, 30, 10, 20};
    // int t = 100;
    // int i;
    // for (i = n - 1; i >= 0; i--)
    // {
    //     if (arr[i] == t)
    //     {
    //         cout << "last occurence of " << t << " is " << i << endl;
    //         break;
    //     }
    // }

    // ques 4 reverse array
    // int arr[] = {10, 20, 30, 40, 50, 60, 70};
    // int n = sizeof(arr) / sizeof(int);
    // int s = 0;
    // int e = n - 1;
    // while (s < e)
    // {
    //     swap(arr[s], arr[e]);
    //     s++;
    //     e--;
    // }
    // for (int s = 0; e < n; i++)
    // {
    //     cout << arr[s] << " ";
    // }

    // ques 5 clockwise movement
    // int arr[] = {10, 20, 30, 40, 50, 60, 70};
    // int n = sizeof(arr) / sizeof(int);
    // int temp = arr[n - 1];
    // for (int i = n - 1; i >= 1; i--)
    // {
    //     arr[i] = arr[i - 1];
    // }
    // arr[0] = temp;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // ques 6 clockwise rotation k times
    // int arr[] = {10, 20, 30, 40, 50, 60, 70};
    // int n = sizeof(arr) / sizeof(int);
    // int k = 3;
    // for (int j = 1; j <= k; j++)
    // {
    //     for (int i = n - 1; i >= 1; i--)
    //     {

    //         int temp = arr[n - 1];
    //         arr[i] = arr[i - 1];
    //         arr[0] = temp;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // ques 7 three largest elements
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(int);
    int fl = INT_MIN;
    int sl = INT_MIN;
    int tl = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > fl)
        {
            tl = sl;
            sl = fl;
            fl = arr[i];
        }
        else if (arr[i] > fl)
        {
            tl = sl;
            sl = arr[i];
        }
        else if (arr[i] > tl)
        {
            tl = arr[i];
        }
    }

    return 0;
}