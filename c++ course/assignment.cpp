#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int m;
    //if (N > 1)
    //{
        m = N / 2;
        for (int i = 1; i <= 1; i++)
        {
            for (int j = 1; j <= N - 1; j++)
            {
                cout << " " << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        for (int i = 1; i <= m; i++)
        {
            int count = 1;
            for (int j = 1; j <= 2 * (m - i); j++)
            {
                cout << " " << " ";
            }
            int count1 = i + 1;
            for (int j = 1; j <= i + 1; j++)
            {
                cout << count1 << " ";
                count1--;
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << " " << " ";
            }
            if (i >= 1)
            {
                for (int j = 1; j <= i + 1; j++)
                {
                    cout << count << " ";
                    count++;
                }
            }

            cout << endl;
        }

        for (int i = m - 1; i >= 1; --i)
        {
            int count = 1;

            for (int j = 1; j <= 2 * (m - i); j++)
            {
                cout << " " << " ";
            }
            int count1 = i + 1;
            for (int j = 1; j <= i + 1; j++)
            {
                cout << count1 << " ";
                count1--;
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << " " << " ";
            }
            if (i >= 1)
            {
                /* code */
                for (int j = 1; j <= i + 1; j++)
                {
                    cout << count << " ";
                    count++;
                }
            }

            cout << endl;
        }
        for (int i = 1; i <= 1; i++)
        {
            for (int j = 1; j <= N - 1; j++)
            {
                cout << " " << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
    //}
    // else if (N == 1)
    // {
    //     for (int i = 1; i <= N; i++)
    //     {
    //         for (int j = 1; j <= N; j++)
    //         {
    //             cout << " " << " ";
    //         }
    //         for (int j = 1; j <= N; j++)
    //         {
    //             cout << N << " ";
    //         }
    //         cout << endl;
    //     }
    //     for (int i = 1; i <= N; i++)
    //     {
    //         for (int j = 1; j <= N; j++)
    //         {
    //             cout << N << " ";
    //         }
    //         for (int j = 1; j <= N; j++)
    //         {
    //             cout << " " << " ";
    //         }
    //         for (int j = 1; j <= N; j++)
    //         {
    //             cout << N << " ";
    //         }
    //         cout << endl;
    //     }
    //     for (int i = 1; i <= N; i++)
    //     {
    //         for (int j = 1; j <= N; j++)
    //         {
    //             cout << " " << " ";
    //         }
    //         for (int j = 1; j <= N; j++)
    //         {
    //             cout << N << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    return 0;
}