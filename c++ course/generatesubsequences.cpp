#include <iostream>
#include <cmath>
using namespace std;
// in this we need to generate subsequences
// subsequences are also called the subsets
// if we are given an array of 3 digits then
// the arrangements in which we can arrange it
// are called the total subsequences
// array 10,20,30
//{10,20} {20,30} {10,30} {10} {20} {30} {10,20,30} {}
// there are 2^n subsequences for an array of size of n
// in this we have 8 subsets

void generatesubsequences(int arr[], int n)
{
    for (int num = 0; num <= (pow(2, n) - 1); num++)
    {
        cout << num << " : ";
        for (int k = 0; k < n; k++)
        {
            if ((num >> k) & 1)
            {
                cout << arr[k] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(int);
    generatesubsequences(arr, n);
    return 0;
}