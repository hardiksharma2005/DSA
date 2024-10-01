#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}
int main()
{
    int a;
    cin >> a;
    cout << fibonacci(a);
    return 0;
}