#include <bits/stdc++.h>
using namespace std;

void rec(int i, int n) {
    if (i > n)
        return;

    cout << i << endl;

    rec(i + 1, n);
}

int main() {
    int n;
    cin >> n;

    rec(1, n);

    return 0;
}

/*
Problem Statement:

Given a number N. Print numbers from 1 to N
in separate lines.

Solve this problem using recursion.

Example:

Input:
5

Output:
1
2
3
4
5
*/
