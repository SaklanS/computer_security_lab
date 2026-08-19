#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long mx = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > mx)
            mx = a[i];
    }

    cout << mx;

    return 0;
}

/*
Problem Statement:

Given a number N and N numbers, find the maximum
number among these N numbers.

Example:

Input:
5
1 8 5 7 5

Output:
8

Note:
Do not use the built-in max() function.
*/
