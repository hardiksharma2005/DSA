#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int t)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        // int m = (s + e) / 2; this will lead to integer overflow
        int m = s + (e - s) / 2;
        if (arr[m] == t)
        {
            return m;
        }
        else if (t > arr[m])
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    return -1;
}

int main()
{
    // we need to find the index of the target
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    int t;
    cin >> t;
    cout << binarysearch(arr, n, t) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}