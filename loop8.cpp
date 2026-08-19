//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int cnt = 0;

        while (n > 0) {
            if (n % 2 == 1)
                cnt++;

            n = n / 2;
        }

        int ans = 0;
        int pw = 1;

        for (int i = 0; i < cnt; i++) {
            ans += pw;
            pw *= 2;
        }

        cout << ans << endl;
    }

    return 0;
}
