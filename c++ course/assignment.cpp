#include <iostream>
using namespace std;

int countvalidnumbers(int n, int lastDigit)
{
    // Base case
    if (n == 1)
    {
        return 1;
    }

    // Recursive case
    int result = 0;
    if (lastDigit == 0)
    {
        // Last digit is `a` (0), can be preceded by `a` or `b`
        result = countvalidnumbers(n - 1, 0) + countvalidnumbers(n - 1, 1);
    }
    else
    {
        // Last digit is `b` (1), must be preceded by `a`
        result = countvalidnumbers(n - 1, 0);
    }
    return result;
}

int main()
{
    int t; // test cases
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int result;
        // 0 : 'a'
        // 1 : 'b'
        result = countvalidnumbers(n, 0) + countvalidnumbers(n, 1);
        cout << "#" << i << " : " << result << endl;
    }

    return 0;
}