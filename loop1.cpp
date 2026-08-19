//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        long long ans = 1;

        for (int j = 1; j <= n; j++) {
            ans = ans * j;
        }

        cout << ans << endl;
    }

    return 0;
}
