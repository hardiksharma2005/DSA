#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>

using namespace std;

bool canwedistribute(int b, int s, vector<int> &books, int mid)
{
    int studentsNeeded = 1;
    int currentSum = 0;

    for (int i = 0; i < b; ++i)
    {
        if (books[i] > mid)
        {
            return false;
        }
        if (currentSum + books[i] > mid)
        {
            studentsNeeded++;
            currentSum = books[i];
            if (studentsNeeded > s)
            {
                return false;
            }
        }
        else
        {
            currentSum += books[i];
        }
    }

    return true;
}

int maxpages(int b, int s, vector<int> &books)
{
    if (b < s)
    {
        return -1;
    }
    int l = books[0];
    int r = accumulate(books.begin(), books.end(), 0);
    int mid;

    int ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (canwedistribute(b, s, books, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int b;
        cin >> b;

        int s;
        cin >> s;

        vector<int> books(b);
        for (int i = 0; i < b; i++)
        {
            cin >> books[i];
        }

        cout << maxpages(b, s, books) << endl;
    }

    return 0;
}