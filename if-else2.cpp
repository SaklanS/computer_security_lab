//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    if (A <= B && B <= C) {
        cout << A << endl << B << endl << C << endl;
    }
    else if (A <= C && C <= B) {
        cout << A << endl << C << endl << B << endl;
    }
    else if (B <= A && A <= C) {
        cout << B << endl << A << endl << C << endl;
    }
    else if (B <= C && C <= A) {
        cout << B << endl << C << endl << A << endl;
    }
    else if (C <= A && A <= B) {
        cout << C << endl << A << endl << B << endl;
    }
    else {
        cout << C << endl << B << endl << A << endl;
    }

    cout << endl;

    // Original order
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;
}
