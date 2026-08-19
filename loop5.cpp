//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n == 0) {
            cout << 0;
        }
        else {
            while (n > 0) {
                cout << n % 10;

                n = n / 10;

                if (n > 0)
                    cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
