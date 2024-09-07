#include <iostream>
#include <queue>
#include <stack>

using namespace std;

bool cansortq(queue<int> &iq, stack<int> &ts, int t)
{
    // base case
    if (iq.empty())
    {
        while (!ts.empty())
        {
            if (ts.top() != t)
            {
                return false;
            }
            ts.pop();
            t++;
        }
        return true;
    }

    // recurive case
    int front = iq.front();
    iq.pop();

    // iq's front is equal to target
    if (front == t)
    {
        // front is then moved to next queue
        return cansortq(iq, ts, t + 1);
    }
    else
    {
        // pushing the element to stack
        ts.push(front);
        return cansortq(iq, ts, t);
    }
}

int main()
{
    int T;
    cin >> T; // Number of test cases

    while (T--)
    {
        int n;
        cin >> n; // Number of elements in the queue

        queue<int> iq;
        stack<int> ts;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            iq.push(num);
        }

        if (cansortq(iq, ts,1)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}