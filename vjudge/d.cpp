/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define minus cout << "-1" << '\n'
#define pub push_back
#define pob pop_back
#define rep(x, y) for(int i = x; i < y; i++)
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    rep(0, n) cin >> a[i];
    vector<int> diff;
    diff.pub(abs(a[0] - a[1]));
    diff.pub(abs(a[n - 1] - a[n - 2]));
    for(int i = 1; i < n - 1; i++){
        diff.pub(max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])));
    }
    int mn = INT_MAX;
    for(int i = 0; i < diff.size(); i++){
        mn = min(mn, diff[i]);
    }
    print(mn);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}