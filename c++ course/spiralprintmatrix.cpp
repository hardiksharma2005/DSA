#include <iostream>
using namespace std;

void spiralprint(int mat[][4], int m, int n)
{
    int sr = 0;     // strarting row
    int sc = 0;     // starting column
    int er = m - 1; // ending row
    int ec = n - 1; // ending column
    while (sr <= er && sc <= ec)
    {
        // 1. print the sr: iterate frome sc to ec
        for (int j = sc; j <= ec; j++)
        {
            cout << mat[sr][j] << " ";
        }
        sr++;
        // 2. print the ec: iterate from sr to er
        for (int i = sr; i <= er; i++)
        {
            cout << mat[i][ec] << " ";
        }
        ec--;
        // 3. print the er: iterate from ec to sc
        for (int j = ec; j >= sc; j--)
        {
            cout << mat[er][j] << " ";
        }
        er--;
        // 4. print the sc: iterate from er to sr
        for (int i = er; i >= sr; i--)
        {
            cout << mat[i][sc] << " ";
        }
        sc++;
    }
}

int main()
{
    int mat[][4] = {{11, 12, 13, 14},
                    {22, 23, 24, 15},
                    {21, 26, 25, 16},
                    {20, 19, 18, 17}};
    int m = 4;
    int n = 4;
    spiralprint(mat, m, n);
    return 0;
}