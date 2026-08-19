//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;

        if (x > y) {
            int tmp = x;
            x = y;
            y = tmp;
        }

        int sum = 0;

        for (int j = x + 1; j < y; j++) {
            if (j % 2 != 0) {
                sum += j;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
