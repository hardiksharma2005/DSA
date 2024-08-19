// stack built in standard library

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "size : " << s.size() << endl;
    cout << "top : " << s.top() << endl;

    s.pop();

    cout << "size : " << s.size() << endl;
    cout << "top : " << s.top() << endl;

    s.pop();
    s.pop();

    cout << "size : " << s.size() << endl;
    cout << "empty : " << s.empty() << endl;

    return 0;
}

// stack implementation using deque

// #include <iostream>
// #include <deque>

// using namespace std;

// template <typename T>
// class stack
// {
//     deque<T> d;

// public:
//     void push(T val)
//     {
//         d.push_front(val);
//     }

//     void pop()
//     {
//         if (empty())
//         {
//             return;
//         }
//         d.pop_front();
//     }

//     int size()
//     {
//         return d.size();
//     }

//     T top()
//     {
//         return d.front(); // d[0]
//     }

//     bool empty()
//     {
//         return d.empty();
//     }
// };

// int main()
// {

//     stack<int> s;

//     cout << "size : " << s.size() << endl;
//     cout << "isEmpty ? " << s.empty() << endl;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     cout << "size : " << s.size() << endl;
//     cout << "top : " << s.top() << endl;
//     cout << "isEmpty ? " << s.empty() << endl;

//     s.pop();

//     cout << "size : " << s.size() << endl;
//     cout << "top : " << s.top() << endl;

//     s.pop();

//     cout << "size : " << s.size() << endl;
//     cout << "top : " << s.top() << endl;

//     s.pop();

//     cout << "size : " << s.size() << endl;
//     cout << "top : " << s.top() << endl;

//     s.pop();

//     cout << "size : " << s.size() << endl;
//     cout << "top : " << s.top() << endl;

//     s.pop();

//     cout << "size : " << s.size() << endl;
//     cout << "isEmpty ? " << s.empty() << endl;

//     return 0;
// }

// stack implementation using vector

// #include <iostream>
// #include <vector>

// using namespace std;

// template <typename T>
// class stack
// {
//     vector<T> v;

// public:
//     void push(T val)
//     {
//         v.push_back(val);
//     }

//     void pop()
//     {
//         if (empty())
//         {
//             return;
//         }
//         v.pop_back();
//     }

//     int size()
//     {
//         return v.size();
//     }

//     T top()
//     {
//         return v.back(); // return v[v.size()-1];
//     }

//     bool empty()
//     {
//         return v.empty(); // v.size() == 0
//     }
// };

// int main()
// {

//     stack<string> s;

//     cout << "size : " << s.size() << endl;
//     cout << "isEmpty ? " << s.empty() << endl;

//     s.push("abc");
//     s.push("def");
//     s.push("ghi");
//     s.push("jkl");
//     s.push("mno");

//     cout << "size : " << s.size() << endl;
//     cout << "top : " << s.top() << endl;
//     cout << "isEmpty ? " << s.empty() << endl;

//     s.pop();

//     cout << "size : " << s.size() << endl;
//     cout << "top : " << s.top() << endl;

//     s.pop();

//     cout << "size : " << s.size() << endl;
//     cout << "top : " << s.top() << endl;

//     s.pop();

//     cout << "size : " << s.size() << endl;
//     cout << "top : " << s.top() << endl;

//     s.pop();

//     cout << "size : " << s.size() << endl;
//     cout << "top : " << s.top() << endl;

//     s.pop();

//     cout << "size : " << s.size() << endl;
//     cout << "isEmpty ? " << s.empty() << endl;

//     return 0;
// }