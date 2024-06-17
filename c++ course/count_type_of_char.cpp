#include <iostream>
using namespace std;

int main()
{
    int ucount = 0;
    int lcount = 0;
    int dcount = 0;
    int wcount = 0;
    int scount = 0;
    char ch;
    while (true)
    {
        ch = cin.get();
        if (ch == '$')
        {
            break;
        }
        if (ch >= 'A' && ch <= 'Z')
        {
            ucount++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            lcount++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            dcount++;
        }
        else if (ch >= ' ' || ch <= '\n')
        {
            wcount++;
        }
        else
        {
            scount++;
        }
    }
    cout << "ucount= " << ucount << endl;
    cout << "lcount= " << lcount << endl;
    cout << "dcount= " << wcount << endl;
    cout << "wcount= " << dcount << endl;
    cout << "scount= " << scount << endl;

    return 0;
}