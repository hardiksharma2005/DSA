#include <iostream>
using namespace std;

void printdiagonal(int mat[][10], int m, int n, int i, int j)
{
    // print that diagonal that starts at the (i,j)th index
    int diagonallength = min(m - i, n - j);
    for (int k = 0; k < diagonallength; k++)
    {
        cout << mat[i + k][j + k] << " ";
    }
    cout << endl;
}
void diagonaltraversal(int mat[][10], int m, int n)
{
    // print all the diagonals that start from (i,0)
    for (int i = m - 1; i >= 1; i--)
    {
        printdiagonal(mat, m, n, i, 0);
    }
    // print all the diagonals that start from (0,j)
    for (int j = 0; j <= n - 1; j++)
    {
        printdiagonal(mat, m, n, 0, j);
    }
}

int main()
{
    int mat[10][10] = {{11, 12, 13, 14},
                       {15, 16, 17, 18},
                       {19, 20, 21, 22}};
    int m = 3;
    int n = 4;

    diagonaltraversal(mat, m, n);
    return 0;
}