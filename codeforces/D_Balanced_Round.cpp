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
    vector<ll>v(n);
    rep(0, n) cin >> v[i];
    sort(all(v));
    ll mx = INT_MIN;
    ll cnt = 1;
    for(ll i = 0; i < n - 1; i++){
        if(abs(v[i] - v[i+1]) <= k){
            cnt++;
            mx = max(mx, cnt);
        }else{
            cnt = 1;
            mx = max(mx, cnt);
        }
    }
    if(mx == INT_MIN) print(0);
    else
        print(n - mx);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}