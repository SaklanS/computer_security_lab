#include <bits/stdc++.h>
using namespace std;

void rec(int i) {
    if (i == 0)
        return;

    cout << i;

    if (i > 1)
        cout << " ";

    rec(i - 1);
}

int main() {
    int n;
    cin >> n;

    rec(n);

    return 0;
}

/*
Problem Statement:

Given a number N. Print all numbers from N to 1
separated by a single space.

Solve this problem using recursion.

Example:

Input:
4

Output:
4 3 2 1

Note:
Do not print any leading or trailing spaces.
*/
