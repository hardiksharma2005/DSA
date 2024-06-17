#include <iostream>
using namespace std;

// here we will create a key,that will be the 1st element of the
// unsorted part and then we will insert it in the correct position
void insertionsort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {50, 40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(int);
    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}