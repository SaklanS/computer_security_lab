//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
#include <bits/stdc++.h>
using namespace std;

bool odd(int n) {
    return n % 2 != 0;
}

bool pal(int n) {
    int rev = 0;
    int tmp = n;

    while (tmp > 0) {
        rev = rev * 2 + tmp % 2;
        tmp /= 2;
    }

    return rev == n;
}

int main() {
    int n;
    cin >> n;

    if (odd(n) && pal(n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
