#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool ok = false;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x <= 100)
            continue;

        cout << x;
        ok = true;
        break;
    }

    if (!ok)
        cout << -1;

    return 0;
}

/*
Problem Statement:

Given N numbers, find the first number greater than 100.

Ignore all numbers that are less than or equal to 100
using continue.

When the first number greater than 100 is found,
print it and stop the loop using break.

If no number is greater than 100, print -1.

Example:

Input:
6
20 50 100 75 150 200

Output:
150
*/
