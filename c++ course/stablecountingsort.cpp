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
        cout << freq[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        freq[i] = freq[i] + freq[i - 1];
    }
    for (int i = 0; i <= k; i++)
    {
        cout << freq[i] << " ";
    }
    cout << endl;
    for (int i = k; i >= 1; i--)
    {
        freq[i] = freq[i - 1];
    }
    freq[0] = 0;
    for (int i = 0; i <= k; i++)
    {
        cout << freq[i] << " "; // setting indexes
    }
    cout << endl;
    int out[100];
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];   // transferring that digit
        out[freq[x]] = x; // index checked by freq and digit is set into it
        freq[x]++;        //+1 the index for the next digit
    }
    for (int i = 0; i < n; i++)
    {
        cout << out[i] << " ";
    }
    cout << endl;
    return 0;
}