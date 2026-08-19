#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long x;
    cin >> x;

    int pos = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            pos = i;
            break;
        }
    }

    cout << pos;

    return 0;
}

/*
Problem Statement:

Given a number N and an array A of N numbers.
Determine if the number X exists in array A or not.

If X exists, print its position (0-index).
If X appears more than once, print the position
of the first occurrence.

If X does not exist, print -1.

Example:

Input:
3
3 0 1
0

Output:
1

Note:
Do not use built-in search functions.
*/
