#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x < 0)
            break;

        if (x % 2 != 0)
            continue;

        cout << x << " ";
    }

    return 0;
}

/*
Problem:
Given N numbers, print only the positive even numbers.
Stop completely when a negative number is found.
*/
