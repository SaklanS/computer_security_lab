#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n == 1 || n == 2)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << fib(n);

    return 0;
}

/*
Problem Statement:

Given a number N. Print the value of the Nth Fibonacci number.

Solve this problem using recursion.

Input:
Only one line containing a number N (1 <= N <= 30).

Output:
Print the value of the Nth Fibonacci number.

Example:

Input:
5

Output:
3
*/
