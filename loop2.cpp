//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N
#include <bits/stdc++.h>
using namespace std;

int main() {
    char s;
    int n;

    cin >> s;
    cin >> n;

    int i = 0;

    while (i < n) {
        int x;
        cin >> x;

        int j = 0;

        while (j < x) {
            cout << s;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
