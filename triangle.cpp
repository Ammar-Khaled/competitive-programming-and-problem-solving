// https://codeforces.com/contest/766/problem/B

#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // read the number of segments
    int n;
    cin >> n; // 5

    // read the lengths into an array
    int length[n];
    for (int i = 0; i < n; i++)
    {
        cin >> length[i]; // 1 5 3 2 4
    }

    sort(length, length + n);
    // 0  ..  n-3  n-2  n-1
    // 1  2   3     4    5

    for (int i = 0; i < n - 2; i++)
    {
        if (length[i] + length[i + 1] > length[i + 2])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}