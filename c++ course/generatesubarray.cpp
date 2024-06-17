#include <iostream>
using namespace std;

void generatesubarray(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++) // starting point iteration
    {
        for (int j = i; j <= n - 1; j++) // ending point iteration
        {
            for (int k = i; k <= j; k++) // printing elements
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(int);
    generatesubarray(arr, n);
    return 0;
}