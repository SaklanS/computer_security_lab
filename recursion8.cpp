#include <bits/stdc++.h>
using namespace std;

long long fac(int n) {
    if (n == 1)
        return 1;

    return n * fac(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << fac(n);

    return 0;
}

/*
Problem Statement:

Given a number N. Print the factorial of N.

Solve this problem using recursion.

Example:

Input:
5

Output:
120
*/
