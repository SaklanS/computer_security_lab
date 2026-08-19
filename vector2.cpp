//https://atcoder.jp/contests/arc087/tasks/arc087_a?lang=en
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    long long ans = 0;

    for (int i = 0; i < n; ) {
        int j = i;

        while (j < n && a[j] == a[i])
            j++;

        long long x = a[i];
        long long cnt = j - i;

        if (cnt < x)
            ans += cnt;
        else
            ans += cnt - x;

        i = j;
    }

    cout << ans;

    return 0;
}
