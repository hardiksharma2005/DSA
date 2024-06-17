#include <iostream>
using namespace std;

// here we were just comparing every number with its next number
// and if it were not sorted then we were swapping it
void bubblesort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++) // number of passes
    {
        bool flag = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
        {
            // no swaps were done in the ith pass,array is sorted
            break;
        }
    }
}

int main()
{
    int arr[] = {50, 40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(int);
    bubblesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}