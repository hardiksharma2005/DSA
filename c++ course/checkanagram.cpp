#include <iostream>
using namespace std;

// anagrams are those words which have the exact amount of letters
bool anagram(char s1[], char s2[])
{
    // we will be using frequency maps
    // s1's frequency map:
    int f1[26] = {0};
    for (int i = 0; s1[i] != '\0'; i++)
    {
        char ch = s1[i];
        int idx = ch - 'a';
        f1[idx]++;
    }

    // s2's frequency map:
    int f2[26] = {0};
    for (int i = 0; s2[i] != '\0'; i++)
    {
        f2[s2[i] - 'a']++;
    }

    // compare the freqmaps:
    for (int i = 0; i < 26; i++)
    {
        if (f1[i] != f2[i])
        {
            // s1 and s2 are not anagrams since freq map did not match
            return false;
        }
    }
    // s1 and s2 are anagrams
    return true;
}

int main()
{
    char s1[] = "state";
    char s2[] = "taste";

    anagram(s1, s2) ? cout << "anagram" << endl : cout << "not an anagram" << endl;
    return 0;
}