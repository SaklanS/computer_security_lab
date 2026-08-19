//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
#include <bits/stdc++.h>
using namespace std;

int flr(int a, int b) {
    return a / b;
}

int cel(int a, int b) {
    return (a + b - 1) / b;
}

int rnd(int a, int b) {
    return (a + b / 2) / b;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "floor " << a << " / " << b << " = " << flr(a, b) << endl;
    cout << "ceil " << a << " / " << b << " = " << cel(a, b) << endl;
    cout << "round " << a << " / " << b << " = " << rnd(a, b) << endl;

    return 0;
}
