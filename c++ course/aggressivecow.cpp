#include <iostream>
#include <algorithm>
using namespace std;

bool canplacecows(int c, int n, int pos[], int m)
{
    // placing the 1st cow in the 1st stall
    int numofcowsplaced = 1;
    int prevcowpos = pos[0];

    // check if you can place the c-1 cows in remaining n-1 stalls
    for (int i = 1; i < n; i++)
    {
        // can I place the next cow in the ith stall ?

        if (pos[i] - prevcowpos >= m)
        {

            // yes, you can place the next cow in the ith stall

            numofcowsplaced++;
            prevcowpos = pos[i];

            if (numofcowsplaced == c)
            {

                return true;
            }
        }
    }

    return false;
}

int largestmindist(int n, int c, int *pos)
{
    int e = pos[n - 1] - pos[0]; // for the tightest upper bound,place the two cows at extreme position
    int s = INT32_MAX;           // for the tightest lower bound, place the two cows in stalls closest to each other
    for (int i = 1; i < n; i++)
    {
        if (pos[i] - pos[i - 1] < s)
        {
            s = pos[i] - pos[i - 1];
        }
    }
    int ans;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        // can you place 'c' cows in 'n' stalls such that
        // the min dist b/w them is at least 'm'?

        if (canplacecows(c, n, pos, m))
        {
            // we can place 'c' cows in 'n' stalls
            ans = m;
            // since we want to find the largest minimum distance b/w
            // the cows, continue your search towards the right of 'm'
            // i.e. search space reduces from [s,e] to [ m+1,e]
            s = m + 1;
        }
        else
        {
            // you can't place 'c' cows in 'n' stalls at a min
            // dist of 'm' therefore continue your search towards
            // the left of 'm'
            // i.e. search space reduces from [s,e] to [s,m-1]
            e = m - 1;
        }
    }
}

int main()
{
    int n = 5; // number of stalls
    int c = 3; // number of cows
    int pos[] = {1, 2, 4, 8, 9};
    cout << largestmindist(n, c, pos) << endl;
    return 0;
}