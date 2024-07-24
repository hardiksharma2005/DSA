#include <iostream>
using namespace std;

// int * f()
// {
//     int x=10;     //this will give error because the memory would be deallocated at the runtime
//     return &x;
// }
int *f()
{
    int *xptr = new int;
    *xptr = 50;
    return xptr;
}
int main()
{
    int *ptr = new int;
    *ptr = 10;
    cout << *ptr << endl;
    cout << ptr << endl;
    delete ptr; // deallocated teh previous memory allocation
    ptr = new int;
    cout << ptr << endl;
    delete ptr;
    ptr = f();
    cout << *ptr << endl;
    int *aptr = new int[5]; // 1-d array allocation in heap
    *ptr = 10;
    *(ptr + 1) = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    *(ptr + 4) = 50;
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    delete[] ptr; // deallocates the whole array
    return 0;
}