#include <iostream>
using namespace std;

int maxsubarraysumkadane(int arr[], int n)
{
    int x[100];
    x[0] = arr[0];
    int maxsofar = x[0];
    for (int i = 1; i <= n - 1; i++)
    {
        x[i] = max(x[i - 1] + arr[i], arr[i]);
        maxsofar = max(maxsofar, x[i]);
    }
    return maxsofar;
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << maxsubarraysumkadane(arr, n) << endl;
    return 0;
}