#include <iostream>
using namespace std;

int main()
{
    // int arr[3][4] = {{10, 15, 20, 25},
    //                  {30, 35, 40, 45},
    //                  {50, 55, 60, 65}};
    int arr[10][10];
    int m;
    cin >> m;
    int n;
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "size of " << sizeof(arr) << "B" << endl;
    return 0;
}