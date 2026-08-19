#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '\\')
            break;

        cout << s[i];
    }

    return 0;
}

/*
Problem Statement:

Given a string S, print the string from the beginning
until the first '\' character.

Do not print the '\' character.

Input:
Only one line containing a string S.

It is guaranteed that S contains a '\' character.

Example:

Input:
Egyptian collegiate programming\ contest

Output:
Egyptian collegiate programming

Note:
Use getline(cin, s) because the string can contain spaces.
*/
