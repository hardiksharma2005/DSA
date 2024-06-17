#include <iostream>
using namespace std;

// approach 1
//  int maxsubarraysum(int arr[], int n)
//  {
//      int maxsofar = INT32_MIN;
//      for (int i = 0; i <= n - 1; i++) // starting point iteration
//      {
//          for (int j = i; j <= n - 1; j++) // ending point iteration
//          {
//              int sum = 0;
//              for (int k = i; k <= j; k++) // printing elements
//              {
//                  sum += arr[k];
//              }
//              maxsofar = max(maxsofar, sum);
//          }
//      }
//      return maxsofar;
//  }
// approach 2
int maxsubarraysum(int arr[], int n)
{
    int csum[101];
    csum[0] = 0;
    for (int i = 0; i <= n; i++) // starting point iteration
    {
        csum[i] = csum[i - 1] + arr[i - 1];
    }
    int maxsofar = INT32_MIN;
    for (int i = 0; i <= n - 1; i++) // ending point iteration
    {
        for (int j = i; j <= n - 1; j++)
        {
            int sum = csum[j + 1] - csum[i];
            maxsofar = max(maxsofar, sum);
        }
    }
    return maxsofar;
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << maxsubarraysum(arr, n) << endl;
    return 0;
}