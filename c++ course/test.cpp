#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

bool cansortq(queue<int> iq)
{
    stack<int> ts;
    int target = 1;

    while (!iq.empty())
    {
        int front = iq.front();
        iq.pop();

        // front of queue can be pushed to another to queue directly
        if (front == target)
        {
            target++;
            // Check if we can pop from the stack as well
            while (!ts.empty() && ts.top() == target)
            {
                ts.pop();
                target++;
            }
        }
        // if front is eligible for direct push then push it into stack
        else
        {
            ts.push(front);
        }
    }

    // checking the stack
    while (!ts.empty())
    {
        if (ts.top() != target)
        {
            return false;
        }
        ts.pop();
        target++;
    }

    return true;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        queue<int> iq;
        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;
            iq.push(num);
        }

        cansortq(iq) ? cout << "Yes" << endl : cout << "No" << endl;
    }

    return 0;
}