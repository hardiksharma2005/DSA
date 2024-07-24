#include <iostream> // dyanamic array == vector
using namespace std;

int *resize(int *a, int c)
{
    cout << "resizing from " << c * sizeof(int) << "B to " << 2 * c * sizeof(int) << "B" << endl;
    int *b = new int[2 * c];
    for (int i = 0; i < c; i++)
    {
        b[i] = a[i];
    }
    delete[] a;
    return b;
}

int main()
{
    int *a = new int[1];
    int c = 1; // capacity of the dynamic array
    int i = 0; // size of  the dynamic array
    int x;
    while (true)
    {
        cin >> x;
        if (x < 0)
        {
            break;
        }
        if (i == c)
        {
            // resize the vector
            a = resize(a, c);
            c = 2 * c; // we also have to double the capacity of 'a' vector
        }
        a[i] = x;
        i++;
    }
    cout << c * sizeof(int) << endl;
    for (int j = 0; j < i; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}