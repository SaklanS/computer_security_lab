#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i == 100)
            break;

        if (i % 3 == 0)
            continue;

        cout << i << " ";
    }

    return 0;
}

/*
Problem Statement:

Given a number N.

Print all numbers from 1 to N.

Rules:
1. If the number is 100, stop the loop using break.
2. If the number is divisible by 3, skip it using continue.
3. Print all other numbers separated by a space.

Example:

Input:
10

Output:
1 2 4 5 7 8 10
*/
