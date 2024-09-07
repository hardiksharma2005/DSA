// Q. Max sum of K sized subarray

// #include <iostream>

// using namespace std;

// int main()
// {

//     int arr[] = {1, 4, 2, 7, 6, 3, 5};
//     int n = sizeof(arr) / sizeof(int);
//     int k = 4;

//     int i = 0; // to store the start of the window
//     int j = 0; // to store the end of the window

//     int w_sum = 0; // to store the window sum

//     // time : O(n)
//     // space: O(1)

//     // compute the sum of 1st window

//     while (j < k)
//     { // k
//         w_sum += arr[j];
//         j++;
//     }

//     int max_sum = w_sum; // to track the maximum window sum

//     // compute the sum for the remaining windows

//     while (j < n)
//     { // n-k

//         // slide the window
//         w_sum -= arr[i];
//         i++;
//         w_sum += arr[j];

//         max_sum = max(max_sum, w_sum);

//         j++;
//     }

//     cout << max_sum << endl;

//     return 0;
// }

// Q. count anagrams

// #include <iostream>

// using namespace std;

// bool compareMap(int tFreqMap[], int wFreqMap[])
// {
//     for (int i = 0; i < 26; i++)
//         if (tFreqMap[i] != wFreqMap[i])
//             return false;
//     return true;
// }

// int main()
// {

//     string s = "cbaebabacd";
//     string t = "abc";

//     int n = s.size();
//     int k = t.size(); // size of the window

//     int count = 0; // to store the count of anagrams of 't' in 's'

//     int tFreqMap[26] = {0}; // to store a mapping  b/w characters
//     // present in 't' & their frequencies
//     for (int i = 0; i < k; i++)
//     {
//         tFreqMap[t[i] - 'a']++;
//     }

//     int i = 0; // to store the start of the window
//     int j = 0; // to store the end of the window

//     int wFreqMap[26] = {0}; // to store a mapping between characters
//     // present in window & their frequencies

//     // build the frequency map for the 1st window

//     while (j < k)
//     {
//         wFreqMap[s[j] - 'a']++;
//         j++;
//     }

//     // check if the window is an anagram of 't'

//     if (compareMap(tFreqMap, wFreqMap))
//         count++;

//     // build the frequency map for the remaining window

//     while (j < n)
//     {

//         // slide the window
//         wFreqMap[s[i] - 'a']--;
//         i++;
//         wFreqMap[s[j] - 'a']++;

//         if (compareMap(tFreqMap, wFreqMap))
//             count++;

//         j++;
//     }

//     cout << count << endl;

//     return 0;
// }

// Q. first negative number in a k sized subarray

// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// int main()
// {

//     int arr[] = {-2, 0, -1, 2, -3, 1, 3, 2, 4};
//     int n = sizeof(arr) / sizeof(int);
//     int k = 4;

//     int i = 0; // to store the start of the window
//     int j = 0; // to store the end of the window

//     // time : O(n)
//     // space: O(k) due to queue when a window has only negative nos.

//     queue<int> q;  // to store negative numbers in a window
//     vector<int> v; // to store first negative number for each k-sized window

//     // find the first negative number in the 1st window

//     while (j < k)
//     { // k
//         if (arr[j] < 0)
//         {
//             q.push(arr[j]);
//         }
//         j++;
//     }

//     q.empty() ? v.push_back(0) : v.push_back(q.front());

//     // find the first negative number in the remaining windows

//     while (j < n)
//     { // n-k

//         // slide the window
//         if (arr[i] < 0)
//             q.pop();
//         i++;
//         if (arr[j] < 0)
//             q.push(arr[j]);

//         q.empty() ? v.push_back(0) : v.push_back(q.front());

//         j++;
//     }

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }

// Q. minimum window substring

#include <iostream>
#include <unordered_map>
#include <climits>

using namespace std;

string minWindow(string s, string t)
{

    int m = s.size();
    int n = t.size();

    unordered_map<char, int> tFreqMap; // to store a mapping  b/w characters
    // present in 't' & their frequencies

    int tCount = 0; // to store the no. of unique characters in 't'.

    // to keep track of number of chacters of 't' with the
    // required frequeny NOT present in the current window

    for (int i = 0; i < n; i++)
    {
        char ch = t[i];
        tFreqMap[ch]++;
        // if (tFreqMap[ch] == 1) tCount++;
    }

    tCount = tFreqMap.size();

    int i = 0; // to store the start of the window
    int j = 0; // to store the end of the windw

    int min_len = INT_MAX; // to track the length of the minimum window
    int s_index;           // to store the starting index of the minimum window

    while (j < m)
    {

        // expand the window
        char ch = s[j];
        if (tFreqMap.find(ch) != tFreqMap.end())
        {
            tFreqMap[ch]--;
            if (tFreqMap[ch] == 0)
            {
                // window has sufficient occurrences of 'ch'
                tCount--;
            }
        }

        // check for validity of the window
        if (tCount == 0)
        {
            // found a valid window
            if (j - i + 1 < min_len)
            {
                s_index = i;
                min_len = j - i + 1;
            }
            // optimise the window length by shrinking it
            while (tCount == 0)
            {
                char out = s[i];
                if (tFreqMap.find(out) != tFreqMap.end())
                {
                    // 'out' is present in 't'
                    tFreqMap[out]++;
                    if (tFreqMap[out] == 1)
                    {
                        // window no longer has sufficient occurrences
                        // of 'out' therefore it is no longer valid.
                        i++;
                        tCount++;
                    }
                    else
                    {
                        // you have sufficient occurrences of 'out'
                        // in the  window  hence it is still valid.
                        i++;
                        if (j - i + 1 < min_len)
                        {
                            s_index = i;
                            min_len = j - i + 1;
                        }
                    }
                }
                else
                {
                    // 'out' was an  unnecessary character in the
                    // window therefore the window is still valid.
                    i++;
                    if (j - i + 1 < min_len)
                    {
                        s_index = i;
                        min_len = j - i + 1;
                    }
                }
            }
        }

        // continue with the expansion of the window
        j++;
    }

    return min_len == INT_MAX ? "" : s.substr(s_index, min_len);
}

int main()
{

    string s = "adobecodebanc";
    string t = "abc";

    cout << minWindow(s, t) << endl;

    return 0;
}