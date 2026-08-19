#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int ls = 0;
    int lt = 0;

    for (char c : s)
        ls++;

    for (char c : t)
        lt++;

    cout << ls << " " << lt << endl;
    cout << s << " " << t;

    return 0;
}

/*
Problem Statement:

Given two strings S and T.

Print 2 lines:

1. Print the length of S and T separated by a space.
2. Print S and T separated by a space.

Example:

Input:
LEVEL
ONE

Output:
5 3
LEVEL ONE

Note:
The string length should be calculated manually
without using the built-in length() function.
*/
