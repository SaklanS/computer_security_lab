#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 0)
            break;

        if (x < 0)
            continue;

        sum += x;
    }

    cout << sum;

    return 0;
}

/*
Problem Statement:

Given N numbers, find the sum of all positive numbers.

If a number is negative, skip it using continue.

If a number is zero, stop processing the numbers using break.

Example:

Input:
7
5 -2 8 -3 4 0 10

Output:
17

Explanation:
5 + 8 + 4 = 17
-2 and -3 are skipped.
Processing stops when 0 is found.
*/
