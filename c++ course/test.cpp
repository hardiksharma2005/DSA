#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// Function to generate permutations
void generatePermutations(string str, int l, int r, vector<string> &result)
{
    if (l == r)
    {
        result.push_back(str);
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(str[l], str[i]);
            generatePermutations(str, l + 1, r, result);
            swap(str[l], str[i]); // backtrack
        }
    }
}

// Function to get all permutations less than the original string
vector<string> getSmallerPermutations(string str)
{
    vector<string> result;
    generatePermutations(str, 0, str.size() - 1, result);

    // Remove duplicates (not necessary if all characters are unique)
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());

    // Filter permutations to keep only those smaller than the original string
    vector<string> smallerPerms;
    for (const string &perm : result)
    {
        if (perm < str)
        {
            smallerPerms.push_back(perm);
        }
    }

    return smallerPerms;
}

int main()
{
    string input;
    cin >> input;

    // Get permutations that are lexicographically smaller
    vector<string> result = getSmallerPermutations(input);

    // Output results
    for (const string &s : result)
    {
        cout << s << endl;
    }

    return 0;
}