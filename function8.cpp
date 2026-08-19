//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E
#include <bits/stdc++.h>
using namespace std;

void swp(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

int main() {
    int x, y;
    cin >> x >> y;

    swp(x, y);

    cout << x << " " << y;

    return 0;
}
