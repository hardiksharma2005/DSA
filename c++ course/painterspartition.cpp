/* When we calculate the mid point 'm', we ask the question

    can 'k' painters paint 'n' boards of given 'len' in 'm' amt. of time ?

    now, we can rephrase this question in two ways

    1. how many painters are required to paint 'n' boards of given 'len' in 'm' amt. of time ?

       say, 'x' painters can paint 'n' boards of given 'len' in 'm' amt. of time then

       case (a)

       now, if x <= k then that means 'k' painters can also paint 'n' boards of given 'len'
       in 'm' amt. of time so we get 'true' and move towards the left to minimize time

       case (b)

       if x > k then that means 'k' painters cannot paint 'n' boards of given 'len' in 'm'
       amt. of time i.e we get false and move towards the right.

    2. how many boards of given 'len' can 'k' painters paint in 'm' amt. of time ?

*/

#include <iostream>
#include <climits>

using namespace std;

int numPaintersRequired(int n, int b[], int timeLimit)
{ // linear time

    int numPainters = 1; // assume 1 painter can complete the entire job in the given timeLimit
    int time = 0;

    int i = 0;

    while (i < n)
    {

        // paint the ith board

        time += b[i];

        if (time > timeLimit)
        {

            // add another painter to the job

            numPainters++;
            time = 0;
            continue; // new painter will resume from the ith board itself
        }

        i++;
    }

    return numPainters;
}

// time : log(e-s)*linear ~ O(nlog(e-s))

int getMinTime(int k, int n, int *b)
{

    int s = INT_MIN; // for the tightest lower-bound, assign a painter to each board
    int e = 0;       // for the tightest upper-bound, assign a single painter to paint all the boards

    for (int i = 0; i < n; i++)
    {
        s = max(s, b[i]);
        e += b[i];
    }

    int ans;

    while (s <= e)
    { // log(e-s) times

        int m = s + (e - s) / 2;

        int x = numPaintersRequired(n, b, m); // linear time

        if (x <= k)
        {

            // 'k' painters can also paint 'n' boards in 'm' amt. of time

            ans = m;

            // since we want to minimize the time, continue
            // your search towards the left of 'm' i.e. the
            // search space reduces from [s, e] to [s, m-1].

            e = m - 1;
        }
        else
        {

            // 'k' painters cannot paint 'n' boards in 'm' amt. of time
            // therefore continue your search towards the right of 'm'
            // i.e. the search space reduces from [s, e] to [m+1, e].

            s = m + 1;
        }
    }

    return ans;
}

int main()
{

    int k;
    cin >> k;

    int n;
    cin >> n;

    int *b = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    cout << getMinTime(k, n, b) << endl;

    return 0;
}