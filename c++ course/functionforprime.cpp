#include <iostream>
using namespace std;

bool isprime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    isprime(n) ? cout << "prime" << endl : cout << "not prime" << endl;
    return 0;
}