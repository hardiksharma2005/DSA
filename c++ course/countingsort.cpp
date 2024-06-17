#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 0, 3, 2, 3, 1, 2, 0, 2};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;

    int freq[10] = {0}; // initialising array with zeros
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        freq[x]++; // now making their count ++
    }
    for (int i = 0; i <= k; i++)
    {
        cout << "freq(" << i << ") = " << freq[i] << endl;
    }
    for (int i = 0; i <= k; i++)
    {
        int y = freq[i];
        for (int j = 1; j <= y; j++)
        {
            cout << i << " ";
        }
    }

    return 0;
}