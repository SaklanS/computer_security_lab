//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
#include <bits/stdc++.h>
using namespace std;

int dig(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        int s = dig(i);

        if (s >= a && s <= b)
            ans += i;
    }

    cout << ans;

    return 0;
}
