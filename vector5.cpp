#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] > 0)
            a[i] = 1;
        else if (a[i] < 0)
            a[i] = 2;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

/*
Problem Statement:

Given a number N and an array A of N numbers.

Replace every positive number by 1.
Replace every negative number by 2.
Keep zero unchanged.

Then print the resulting array.

Example:

Input:
5
1 -2 0 3 4

Output:
1 2 0 1 1
*/
