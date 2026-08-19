//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
#include <bits/stdc++.h>
using namespace std;

bool big(long long a, long long b, long long c, long long d) {
    long double x = b * log(a);
    long double y = d * log(c);

    return x > y;
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (big(a, b, c, d))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
