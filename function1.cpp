//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
#include <bits/stdc++.h>
using namespace std;

bool luck(int n) {
    while (n > 0) {
        int d = n % 10;

        if (d != 4 && d != 7)
            return false;

        n = n / 10;
    }

    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    bool ok = false;

    for (int i = a; i <= b; i++) {
        if (luck(i)) {
            cout << i << " ";
            ok = true;
        }
    }

    if (!ok)
        cout << -1;

    return 0;
}
