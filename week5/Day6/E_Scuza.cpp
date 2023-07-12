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
    ll n, k;
    cin >> n >> k;
    vector<ll> pref(n), pre_max(n);
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        if(i == 0){
            pref[i] = x;
            pre_max[i] = x;
        }else{
            pref[i] = pref[i - 1] + x;
            pre_max[i] = max(pre_max[i - 1], x);
        }
    }
    for(ll i = 0; i < k; i++){
        ll q; cin >> q;
        int idx = upper_bound(all(pre_max), q) - pre_max.begin();
        if(idx - 1 < 0) cout << 0 << ' ';
        else
        cout << pref[idx - 1] << ' ';
    }
    cout << '\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}