//https://cses.fi/problemset/task/1623
#include <bits/stdc++.h>
using namespace std;

long long dif(vector<long long>& p, int n, long long a, long long b) {
    if (n == 0)
        return abs(a - b);

    long long x = dif(p, n - 1, a + p[n - 1], b);
    long long y = dif(p, n - 1, a, b + p[n - 1]);

    return min(x, y);
}

int main() {
    int n;
    cin >> n;

    vector<long long> p(n);

    for (int i = 0; i < n; i++)
        cin >> p[i];

    cout << dif(p, n, 0, 0);

    return 0;
}
