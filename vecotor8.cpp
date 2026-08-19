#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long mn = a[0];
    int pos = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] < mn) {
            mn = a[i];
            pos = i + 1;
        }
    }

    cout << mn << " " << pos;

    return 0;
}

/*
Problem Statement:

Given a number N and an array A of N numbers.
Print the lowest number and its position.

If the lowest number appears more than once,
print the position of the first occurrence.

The position is 1-indexed.

Example:

Input:
5
5 6 2 3 2

Output:
2 3

Note:
Do not use the built-in min() function.
*/
