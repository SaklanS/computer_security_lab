#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool ok = false;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 2 != 0)
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

Given N numbers, find and print the first even number.

If there is no even number, print -1.

Use continue to skip odd numbers and
break when the first even number is found.
*/
