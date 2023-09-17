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
const int N = 2e5 + 5;
vpair point(N);
ll n, k, a, b;
ll getdis(pair<ll,ll> x, pair<ll, ll> y){
    return abs(x.first - y.first) + abs(x.second - y.second);
}
ll getmindis(pair<ll, ll> x){
    ll ans = 1e18;
    for(int i = 0; i < k; i++){
        ans = min(ans, getdis(x, point[i]));
    }
    return ans;
}
void solve(){
    cin >> n >> k >> a >> b;
    a--;
    b--;
    for (ll i = 0; i < n; i++)
    {
        cin >> point[i].first >> point[i].second;
    }
    ll ans = getdis(point[a], point[b]);
    if(k){
        ans = min(ans, getmindis(point[a]) + getmindis(point[b]));
    }
    print(ans);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}