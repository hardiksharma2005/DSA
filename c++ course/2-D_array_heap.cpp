#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int n;
    cin >> n;
    int **ptr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        ptr[i] = new int[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ptr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // deallocating all the 1-D arrays first
    for (int i = 0; i < m; i++)
    {
        delete[] ptr[i];
    }
    // and then deallocating the pointer
    delete[] ptr;
    return 0;
}