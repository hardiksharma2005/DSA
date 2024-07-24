// #include <iostream>
// #include <iomanip>

// using namespace std;

// int f(int x)
// {
//     return -x * x + 100 * x; // -x^2 + 100x is a unimodal function
// }

// double findPeakIterative(double s, double e)
// {
//     while (e - s > 1e-6)
//     {
//         cout << s << " " << e << endl;

//         double m1 = s + (e - s) / 3;
//         double m2 = e - (e - s) / 3;

//         if (f(m1) > f(m2))
//         {

//             e = m2;
//         }
//         else
//         {

//             // f(m1) < f(m2)

//             s = m1;
//         }
//     }

//     // e-s <= 1-6

//     return f((s + e) / 2);
// }

// int main()
// {

//     cout << setprecision(20) << fixed;

//     cout << findPeakIterative(0, 100) << endl;

//     return 0;
// }

// Q. peak in mountain array
#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(const vector<int> &arr)
{
    int n = arr.size();

    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        int m1 = s + (e - s) / 3;
        int m2 = e - (e - s) / 3;
        if (arr[m1] > arr[m2])
        {
            e = m2 - 1;
        }
        else
        {
            s = m1 + 1;
        }
    }

    return arr[s]; // arr[e] // here s is equal to e
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 3, 2, 1};
    cout << peakIndexInMountainArray(arr) << endl;

    return 0;
}