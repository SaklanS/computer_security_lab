//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y
#include <bits/stdc++.h>
using namespace std;

int way(int s, int e) {
    if (s == e)
        return 1;

    if (s > e)
        return 0;

    return way(s + 1, e) + way(s + 2, e) + way(s + 3, e);
}

int main() {
    int s, e;
    cin >> s >> e;

    cout << way(s, e);

    return 0;
}
