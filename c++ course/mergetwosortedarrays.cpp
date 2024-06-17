#include <iostream>
using namespace std;

void merge(int arr[], int n, int brr[], int m)
{
    int crr[20];
    int i = 0;
    int j = 0;
    int k = 0;

    while (i <= n - 1 && j <= m - 1)
    {
        if (arr[i] < brr[j])
        {
            crr[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            crr[k] = brr[j];
            j++;
            k++;
        }
    }
    while (i <= n - 1)
    {
        crr[k] = arr[i];
        i++;
        k++;
    }
    while (j <= m - 1)
    {
        crr[k] = arr[j];
        j++;
        k++;
    }
    for (int l = 0; l <= m + n - 1; l++)
    {
        cout << crr[l] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 30, 50, 70};
    int n = sizeof(arr) / sizeof(int);
    int brr[] = {20, 40, 60};
    int m = sizeof(brr) / sizeof(int);

    merge(arr, n, brr, m);
    return 0;
}