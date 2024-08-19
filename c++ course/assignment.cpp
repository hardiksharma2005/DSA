#include <iostream>
#include <vector>
using namespace std;

int count = 0;
void f(int n, int i, int j, vector<string> &results, string a)
{
    // base case
    if (i >= n || j >= n)
    {
        return;
    }
    if (i == n - 1 && j == n - 1)
    {
        results.push_back(a);
        count++;
        return;
    }

    // recursive case
    // option 1 move vertically
    a.push_back('V');
    f(n, i + 1, j, results, a);
    a.pop_back();

    // option 2 move horizontally
    a.push_back('H');
    f(n, i, j + 1, results, a);
    a.pop_back();

    // option 3 move diagonally
    if (i == j)
    {
        a.push_back('D');
        f(n, i + 1, j + 1, results, a);
        a.pop_back();
    }
}
int main()
{
    int n;
    cin >> n;

    vector<string> results;
    string a;
    f(n, 0, 0, results, a);
    for (int i = 0; i < results.size(); i++)
    {
        cout << results[i] << " ";
    }
    cout << endl;
    cout << count;
    return 0;
}