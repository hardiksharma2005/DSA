/*
    Vectors Part I

    How to create a vector ?
        > use empty container constructor (default constructor)
    How to add elements to a vector ?
        > use vector::push_back to add element at back (constant time operator)
    How to remove elements from a vector ?
        > use vector::pop_back to remove element from back (constant time operation)
        > use vector::clear to remove all the elements from a vector
    How to check size of a vector ?
        > use vector::size to know number of elements in a vector
        > use vector::capacity to know current capacity of the vector
        > use vector::max_size to know maximum number of elements that can added in a vector
    How to check if a vector is empty ?
        > use vector::empty or check if vector size is 0
    How to access elements in a vector at a particular index ?
        > use vector::operator[]
        > use vector::at
    How to iterate over elements in a vector ?
        > use indexing like arrays
        > use an iterator
        > use forEach loop
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(int a, int b)
{

    if (a > b)
    {

        // we want a to be ordered before b since we are sorting in decreasing order

        return true;
    }

    return false;
}

class Comparator
{

public:
    // return true if you want a to be ordered before b otherwise return false

    bool operator()(int a, int b)
    {

        if (a > b)
        {

            // we want a to be ordered before b since we are sorting in decreasing order

            return true;
        }

        return false;
    }
};

class addx
{

    int x;

public:
    addx(int x)
    {
        this->x = x;
    }

    int operator()(int y)
    {
        return x + y;
    }
};

class customer
{

public:
    string name;
    int age;
    char gender;
    double credits;

    customer(string name, int age, char gender, double credits)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->credits = credits;
    }
};

// return true if you want a to be ordered before b otherwise return false

bool ageComparator(customer a, customer b)
{

    if (a.age < b.age)
    {

        // we want a to be ordered before b since we are sorting in the inc. ordere based on age

        return true;
    }

    return false;
}

class AgeComparator
{

public:
    // return true if you want a to be ordered before b otherwise return false

    bool operator()(customer a, customer b)
    {

        if (a.age < b.age)
        {

            // we want a to be ordered before b since we are sorting in the inc. ordere based on age

            return true;
        }

        return false;
    }
};

int main()
{
    vector<int> v; // default constructor or empty container constructor

    cout << "size : " << v.size() << endl;         // 0
    cout << "capacity : " << v.capacity() << endl; // 0

    v.push_back(10);

    cout << "size : " << v.size() << endl;         // 1
    cout << "capacity : " << v.capacity() << endl; // 1

    v.push_back(20);

    cout << "size : " << v.size() << endl;         // 2
    cout << "capacity : " << v.capacity() << endl; // 2

    v.push_back(30);

    cout << "size : " << v.size() << endl;         // 3
    cout << "capacity : " << v.capacity() << endl; // 4

    v.push_back(40);

    cout << "size : " << v.size() << endl;         // 4
    cout << "capacity : " << v.capacity() << endl; // 4

    v.push_back(50);

    cout << "size : " << v.size() << endl;         // 5
    cout << "capacity : " << v.capacity() << endl; // 8

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // vector<> class overload operator[]
    }

    cout << endl;

    for (int x : v)
    {
        cout << x << " "; // for each loop
    }

    cout << endl;

    for (auto it = v.begin(), end = v.end(); it != end; it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    v.pop_back();

    cout << "size : " << v.size() << endl;         // 4
    cout << "capacity : " << v.capacity() << endl; // 8

    for (auto x : v)
    {
        cout << x << " ";
    }

    cout << endl;

    v.clear(); // deletes all elements of vector<>

    cout << "size : " << v.size() << endl;         // 0
    cout << "capacity : " << v.capacity() << endl; // 8

    v.empty() ? cout << "true, vector is empty" << endl : cout << "false, vector is non-empty" << endl;

    vector<int> w;

    cout << w.size() << endl;
    cout << w.capacity() << endl;

    w.resize(10);

    cout << w.size() << endl;
    cout << w.capacity() << endl;

    w.resize(0);

    cout << w.size() << endl;
    cout << w.capacity() << endl;

    /*

        Vectors Part II

        How to create a vector ?
            > use fill constructor
            > use range constructor
            > use copy constructor
            > use initialiser list (C++11)
        How to add elements to a vector ?
            > use vector::insert
              > single element
              > fill
              > range
              > initialiser list
        How to remove elements from a vector ?
            > use vector::erase
              > single element
              > range

        How to sort a vector ?
          > use built-in comparator
          > use user-defined comparator
          > pass in reverse order

    */

    // fill constructor
    vector<int> a(10, 0); // or vector<int> a(5, 100);

    cout << "size = " << a.size() << endl;
    cout << "capacity = " << a.capacity() << endl;

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // copy constructor
    vector<int> v2 = a; // or v2(a);

    // copy assignment operator
    vector<int> v3;
    v3 = a;

    // range constructor
    vector<int> v4 = {1, 2, 3, 4, 5};
    // vector<int> v5(v4.begin() + 1, v4.begin() + 4);
    vector<int> v5(v4.begin() + 1, v4.end() - 1);

    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }

    cout << endl;

    // 1. reversing a vector

    reverse(v4.begin(), v4.end()); // [start, end)

    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }

    cout << endl;

    // 2. sorting a vector in the increasing order

    sort(v4.begin(), v4.end());

    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }

    // 3. sorting a vector in the decreasing order

    // sort(v.rbegin(), v.rend());

    sort(v.begin(), v.end(), comparator);

    // greater<int> obj;

    // sort(v.begin(), v.end(), obj);

    // sort(v.begin(), v.end(), greater<int>()); // we used a built in object of vector class this is a built in comparator,this is functor

    // Comparator funcObj;

    // sort(v.begin(), v.end(), funcObj); // funcObj(a, b) // funcObj.operator()(a, b) (here we used our own comparator)

    sort(v.begin(), v.end(), Comparator()); // we are passing an anonoymous object of the Comparator class as the third argument

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    // tranformation of vector
    vector<int> inp = {1, 2, 3, 4, 5};

    for (int i = 0; i < inp.size(); i++)
    {
        cout << inp[i] << " ";
    }

    cout << endl;

    vector<int> out(inp.size());

    // addx obj1(1); // x is equal to 1

    // transform(inp.begin(), inp.end(), out.begin(), obj1);

    transform(inp.begin(), inp.end(), out.begin(), addx(1)); // we are passing an anonoymous obj

    for (int i = 0; i < out.size(); i++)
    {
        cout << out[i] << " ";
    }

    cout << endl;

    addx obj2(2);

    transform(inp.begin(), inp.end(), out.begin(), obj2);

    for (int i = 0; i < out.size(); i++)
    {
        cout << out[i] << " ";
    }

    cout << endl;

    vector<customer> b;

    b.push_back(customer("Ramanujan", 32, 'M', 1729));
    b.push_back(customer("JC Bose", 78, 'M', 2500));
    b.push_back(customer("Aryabhata", 74, 'M', 0));
    b.push_back(customer("Vikram", 52, 'M', 1500));
    b.push_back(customer("Homi", 56, 'M', 1000));

    // sort(b.begin(), b.end(), ageComparator); // ageComparator(a, b)

    AgeComparator obj;

    sort(b.begin(), b.end(), obj); // obj(a, b)

    for (customer c : b)
    {
        cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
    }

    cout << endl;

    return 0;
}