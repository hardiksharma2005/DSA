#include <iostream>
using namespace std;

class customer
{
public:
    string name;
    int age;
    char gender;
    void print()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};

int main()
{
    customer *cptr = new customer;
    cptr->name = "Hardik";
    cptr->age = 19;
    cptr->gender = 'M';
    cptr->print();
    delete cptr;
    return 0;
}