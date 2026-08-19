//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    int mn = min({A, B, C});
    int mx = max({A, B, C});

    cout << mn << " " << mx << "\n";
    return 0;
}
