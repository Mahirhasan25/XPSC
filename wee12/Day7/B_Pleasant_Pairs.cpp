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
    vector<pair<ll,ll>> v;
    for(int i = 1; i <= n; i++){
        ll in; cin >> in;
        v.pub({in, i});
    }
    sort(all(v));
    int cnt = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = i+1; j < n; j++){
            if(v[i].first * v[j].first > 2LL*n) break;
            if(v[i].first * v[j].first == v[i].second + v[j].second)
                cnt++;
        }
    }
    print(cnt);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}