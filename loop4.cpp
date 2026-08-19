//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = n;

    while (i >= 1) {
        int j = 1;

        while (j <= i) {
            cout << "*";
            j++;
        }

        cout << endl;
        i--;
    }

    return 0;
}
