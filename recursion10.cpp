#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n == 1)
        return 0;

    if (n == 2)
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
Problem:
Given N, print the Nth Fibonacci number.

The sequence is:
0 1 1 2 3 5 8 ...

For N = 5:
answer = 3
*/
