//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
#include <bits/stdc++.h>
using namespace std;

long long pw(int x, int p) {
    long long ans = 1;

    for (int i = 1; i <= p; i++) {
        ans *= x;
    }

    return ans;
}

int main() {
    int x, n;
    cin >> x >> n;

    long long sum = pw(x, 0) - 1;

    for (int i = 2; i <= n; i += 2) {
        sum += pw(x, i);
    }

    cout << sum;

    return 0;
}
