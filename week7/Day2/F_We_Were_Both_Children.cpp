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
    ll n; cin >> n;
    vector<ll> cnt(n+1), tot(n+1);
    for(int i = 0; i < n; i++){
        ll in; cin >> in;
        if(in <= n) cnt[in]++;
    }
    for(int i = 1; i <=  n; i++){
        for(int j = i; j <= n; j += i){
            tot[j] += cnt[i];
        }
    }
    ll mx = 0;
    for(auto i : tot)
        mx = max(mx, i);
    print(mx);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}