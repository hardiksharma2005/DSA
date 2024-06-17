#include <iostream>
using namespace std;

int mostwater(int h[], int n)
{
    int maxsofar = 0;
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            // find the area of the container from the ith and
            // jth line
            int width = j - i;
            int height = min(h[i], h[j]);
            int area = width * height;
            maxsofar = max(maxsofar, area);
        }
    }
    return maxsofar;
}

int mostwateroptimised(int h[], int n)
{
    int maxsofar = 0;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int width = j - i;
        int height = min(h[i], h[j]);
        int area = width * height;
        maxsofar = max(maxsofar, area);
        if (h[i] < h[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return maxsofar;
}

int main()
{
    int h[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(h) / sizeof(int);

    cout << mostwater(h, n) << endl;
    cout << mostwateroptimised(h, n) << endl;
    return 0;
}