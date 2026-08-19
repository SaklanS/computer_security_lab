//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
#include <bits/stdc++.h>
using namespace std;

void rec(int n) {
    if (n == 0)
        return;

    cout << "I love Recursion" << endl;

    rec(n - 1);
}

int main() {
    int n;
    cin >> n;

    rec(n);

    return 0;
}
