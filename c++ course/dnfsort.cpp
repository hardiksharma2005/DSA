#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 0, 1, 2, 0, 1, 2, 0, 1};
    int n = sizeof(arr) / sizeof(int);

    int low = -1;
    int mid = 0;
    int high = n;

    while (mid < high)
    {
        if (arr[mid] == 0)
        {
            // put arr[mid] in zeros
            low++;
            swap(arr[low], arr[mid]);
            mid++;
        }
        else if (arr[mid] == 1)
        {
            // put arr[mid] in ones
            mid++;
        }
        else
        {
            // put arr[mid] in twos
            high--;
            swap(arr[mid], arr[high]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}