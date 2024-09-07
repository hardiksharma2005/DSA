// contain duplicates - 1
// #include <iostream>
// #include <unordered_map>
// #include <vector>
// #include <unordered_set>

// using namespace std;

// // time : on avg. O(n)
// // space: O(n) due to freqMap when all elements are unique

// bool isDuplicate(const vector<int> &v)
// {

//     unordered_map<int, int> freqMap; // <element, frequency>

//     for (int i = 0; i < v.size(); i++)
//     { // i=0, key = v[0] = 1 // freqMap[1]++

//         // int key = v[i];
//         // freqMap[key]++;

//         freqMap[v[i]]++;

//         // if(freqMap[v[i]] > 1) {
//         // 	// duplicate found
//         // 	return true;
//         // }
//     }

//     // return false; // no duplicates were found

//     bool flag = false; // assume no duplicates are present

//     for (pair<int, int> p : freqMap)
//     {
//         int element = p.first;
//         int frequency = p.second;
//         if (frequency > 1)
//         {
//             flag = true;
//         }
//         cout << "freq(" << element << ") = " << frequency << endl;
//     }

//     return flag;
// }

// // time : on avg. O(n)
// // space: O(n) due to us when all elements are unique

// bool isDuplicate2(const vector<int> &v)
// {

//     unordered_set<int> us;

//     for (int i = 0; i < v.size(); i++)
//     {

//         if (us.find(v[i]) == us.end())
//         {

//             // v[i] is seen for the 1st time

//             us.insert(v[i]);
//         }
//         else
//         {

//             // v[i] was seen previously therefore we've duplicates

//             return true;
//         }
//     }

//     // no duplicates were found

//     return false;
// }

// int main()
// {

//     vector<int> v = {1, 2, 3, 2, 4};

//     isDuplicate(v) ? cout << "true" << endl : cout << "false" << endl;

//     isDuplicate2(v) ? cout << "true" << endl : cout << "false" << endl;

//     return 0;
// }

// contain duplicates - 2
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// time : O(n)
// spacE: O(n) due to indexMap

bool doesExist(const vector<int> &v, int k)
{

    unordered_map<int, int> indexMap; // <elment, index>

    for (int i = 0; i < v.size(); i++)
    {

        if (indexMap.find(v[i]) != indexMap.end())
        {

            // you've seen v[i] previously, where ? indexMap[v[i]]

            int j = indexMap[v[i]]; // j repr. the index of v[i] when it was seen last
            if (abs(i - j) <= k)
            {
                return true;
            }
        }

        indexMap[v[i]] = i;
    }

    return false;
}

int main()
{

    vector<int> v = {1, 2, 3, 1, 2, 3, 1, 3};
    int k = 2;

    doesExist(v, k) ? cout << "true" << endl : cout << "false" << endl;

    return 0;
}