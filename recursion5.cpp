/*
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W


 */

#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;

#define int long long
#define ll long long
#define ld long double
#define cinv(v) for(auto &i:v) cin >> i;
#define vi vector<int>
#define vii vector<ll>
#define mod 1000000007
#define coutv(v) for(auto e:v) cout << e << ' ';
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define yes cout<<"Yes\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define no cout<<"No\n"
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define comp [](const pair<int,int> &a, const pair<int,int> &b){ return a.second > b.second; }
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'
#define all(v) (v).begin(),(v).end()
#define saklan ios::sync_with_stdio(0); cin.tie(0);
#define dbg(v) do { \
    for (auto val : v) cout << val << " "; \
    cout << endl << "___________________________ " << endl; \
} while(0)

#define otp(v) do { \
    for (auto val : v) cout << val << " "; \
    cout << endl; \
} while(0)

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }



//template<class T>
//using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool cmp(const pair<ll,ll> &a, const pair<ll,ll> &b) {
    return (a.first - a.second) > (b.first - b.second);
}


bool cmsrt(const pair<string,int> &a, const pair<string,int> &b) {
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}
int nCr(int n, int r) {
    if (r > n) return 0;
    if (r > n - r) r = n - r;

    int res = 1;
    for (int i = 0; i < r; i++) {
        res = res * (n - i) / (i + 1);
    }
    return res;
}








bool rec(int n, int i = 1){
    if(i==n) return true;
    if( i > n) return false;
    return rec(n, i*10) or rec(n, i*20);
}




void solve(){
    int n;cin>>n;
    cout << ( (rec(n)) ? "YES" : "NO" ) << endl;


}





int32_t main() {
    saklan
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
