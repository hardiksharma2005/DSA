#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    int n = 0;
    int a = 1;
    for (int i = 0; i < 10; i++)
    {
        if (n == 4)
        {
            n = 0;
        }
        if (n == 0 || n == 1)
        {
        
            if (i % 2 == 0)
            {
                for (int j = 0; j < 1; j++)
                {

                    cout << ch << " ";
                    ch++;
                }
            }
            else
            {
                for (int j = 0; j < 2; j++)
                {

                    cout << ch << " ";
                    ch++;
                }
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < 1; j++)
                {

                    cout << a << " ";
                    a++;
                }
            }
            else
            {
                for (int j = 0; j < 2; j++)
                {

                    cout << a << " ";
                    a++;
                }
            }
        }
        n++;
        cout << endl;
    }

    return 0;
}