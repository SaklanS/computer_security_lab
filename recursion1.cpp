//https://vjudge.net/problem/CSES-2165
#include <bits/stdc++.h>
using namespace std;

long long pw(int n) {
    if (n == 0)
        return 1;

    return 2 * pw(n - 1);
}

void hno(int n, int a, int b, int c) {
    if (n == 0)
        return;

    hno(n - 1, a, c, b);

    cout << a << " " << c << endl;

    hno(n - 1, b, a, c);
}

int main() {
    int n;
    cin >> n;

    cout << pw(n) - 1 << endl;

    hno(n, 1, 2, 3);

    return 0;
}
