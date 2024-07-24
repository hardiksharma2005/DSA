// constraints : n <= 100

#include <iostream>

using namespace std;

void merge(int arr[], int s, int m, int e)
{

    // merge the sorted subarrays arr[s...m] and arr[m+1...e] such that arr[s...e] is sorted

    int i = s;     // to iterate over arr[s...m]
    int j = m + 1; // to iterate over arr[m+1...e]

    int temp[100];
    int k = s; // to iterate over temp[s...e]

    while (i <= m and j <= e)
    {

        if (arr[i] <= arr[j])
        {

            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        { // arr[i] >= arr[j]

            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= m)
    {

        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= e)
    {

        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int l = s; l <= e; l++)
    {
        arr[l] = temp[l];
    }
}

void mergeSort(int arr[], int s, int e)
{

    // base case

    if (s == e)
    {
        // sort arr[s...s] = {arr[s]}
        return;
    }

    // recursive case

    // sort arr[s...e] using mergeSort algorithm

    // 1. divide the arr[s...e] around the midPoint

    int m = s + (e - s) / 2;

    // 2. recursively sort the subarrays arr[s...m] and arr[m+1...e]

    mergeSort(arr, s, m);
    mergeSort(arr, m + 1, e);

    // 3. merge the two sorted subarrays arr[s...m] and arr[m+1...e] such that the merge array is sorted

    merge(arr, s, m, e);
}

int main()
{

    int arr[] = {50, 40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, n - 1); // sort arr[s...e] using the mergeSort algorithm

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

//Q. inversion count
// #include <iostream>

// using namespace std;

// int merge(int arr[], int s, int m, int e)
// {
//     // merge the sorted subarrays arr[s...m] and arr[m+1...e]
//     // and also count no. of cross inv. b/w their elements
//     int i = s;     // to iterate over arr[s...m]
//     int j = m + 1; // to iterate over arr[m+1...e]

//     int temp[100];
//     int k = s; // to iterate temp[s...e]
//     int cnt = 0; // to track no. of cross inv.

//     while (i <= m and j <= e)
//     {
//         if (arr[i] <= arr[j])
//         {
//             temp[k] = arr[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             // arr[i] > arr[j]
//             cnt += m - i + 1; // all the elements in arr[s...m] starting from the ith index form an inv with arr[j]
//             temp[k] = arr[j];
//             j++;
//             k++;
//         }
//     }

//     while (i <= m)
//     {
//         temp[k] = arr[i];
//         i++;
//         k++;
//     }

//     while (j <= e)
//     {
//         temp[k] = arr[j];
//         j++;
//         k++;
//     }

//     for (int l = s; l <= e; l++)
//     {
//         arr[l] = temp[l];
//     }

//     return cnt;
// }

// // time : O(nlogn)
// int countInv(int arr[], int s, int e)
// {
//     // base case
//     if (s == e)
//     {
//         // count no. of inv in arr[s...s] = {arr[s]}
//         return 0;
//     }

//     // recursive case
//     // count no. of inv in arr[s...e]
//     // 1. divide the arr[s...e] around the midPoint
//     int m = s + (e - s) / 2;

//     // 2. ask your friend to sort and count no. of inv. in arr[s...m] and arr[m+1...e]
//     int x = countInv(arr, s, m);
//     int y = countInv(arr, m + 1, e);

//     // 3. count the no. of cross inv i.e. inv. b/w elements of arr[s...m] and arr[m+1..e] and also merge them such that merged arr is sorted
//     int z = merge(arr, s, m, e);

//     return x + y + z;
// }

// int main()
// {
//     int arr[] = {2, 7, 5, 8, 3, 4};
//     int n = sizeof(arr) / sizeof(int);

//     cout << countInv(arr, 0, n - 1) << endl;

//     return 0;
// }