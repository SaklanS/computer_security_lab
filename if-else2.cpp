//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b) {
        if (b <= c) {
            cout << a << endl << b << endl << c << endl;
        }
        else {
            if (a <= c)
                cout << a << endl << c << endl << b << endl;
            else
                cout << c << endl << a << endl << b << endl;
        }
    }
    else {
        if (a <= c) {
            cout << b << endl << a << endl << c << endl;
        }
        else {
            if (b <= c)
                cout << b << endl << c << endl << a << endl;
            else
                cout << c << endl << b << endl << a << endl;
        }
    }

    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
