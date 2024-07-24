#include <iostream>
using namespace std;

class customer
{
public:
    string name;
    int age;
    char gender;

    customer()
    {
        cout << "hello ji aap abhi default constructor ke andar ho ji" << endl;
    }

    customer(int n) : age(n)
    {
        // age = n;
    }

    void printcustomerinfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};
int main()
{
    customer c1;
    c1.name = "Hardik";
    c1.age = 19;
    c1.gender = 'M';
    c1.printcustomerinfo();
    customer c2(5);
    c2.printcustomerinfo();
    return 0;
}