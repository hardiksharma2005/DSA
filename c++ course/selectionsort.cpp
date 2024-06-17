#include <iostream>
using namespace std;

// here we select the minimum number among the digits and then
// swap it with the index 0 number the n we select the next
// minimum number and repeat till array becomes sorted
void selectionsort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++) // n-1 passes
    {
        int minidx = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[minidx])
            {
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    }
}

int main()
{
    int arr[] = {50, 40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(int);
    selectionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}