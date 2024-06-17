#include <iostream>
using namespace std;

int targetsumpair(int arr[], int n, int t)
{
    int count = 0;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int pairsum = arr[i] + arr[j];
        if (pairsum == t)
        {
            count++;
            i++;
            j--;
        }
        else if (pairsum > t)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    int t;
    cin >> t;
    cout << targetsumpair(arr, n, t) << endl;
    return 0;
}