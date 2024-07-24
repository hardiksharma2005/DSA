#include <iostream>
#include <algorithm>
using namespace std;

// rows are sorted
bool ispresent(int mat[][3], int m, int n, int t)
{
    for (int i = 0; i < m; i++)
    {
        // for (int j = 0; j < n; j++)
        // {
        // if ((mat[i][j] == t))
        // {
        //     return true;
        // }
        // }
        if (binary_search(mat[i], mat[i + 1], t))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int mat[][3] = {{40, 50, 60},
                    {10, 20, 30},
                    {70, 80, 90}};
    int m = 3;
    int n = 3;
    int t = 20;
    ispresent(mat, m, n, t) ? cout << t << " found" << endl : cout << t << " not found" << endl;
    return 0;
}