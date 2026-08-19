//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;

    int a = n;

    if (n == a) {
        cout << "int " << a;
    }
    else {
        cout << "float " << a << " " << n - a;
    }

    return 0;
}
