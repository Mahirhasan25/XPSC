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
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;
vector<ll> v[200005];
ll lef[200005];
bool visited[200005];

ll count_leaf(ll src){

    visited[src] = true;
    ll ans = 0;
    bool l = true;

    for(ll i = 0; i < v[src].size(); i++){
        if(!visited[v[src][i]]){
            l = false;
            ans += count_leaf(v[src][i]);
        }
    }

    if(l) return lef[src] = 1;
    else return lef[src] = ans;
}

void solve(){
    ll n; cin >> n;
    ll e = n - 1;

    memset(visited, false, sizeof(visited));
    memset(lef, 0, sizeof(lef));

    while(e--){
        ll a, b;
        cin >> a >> b;
        v[a].pub(b);
        v[b].pub(a);
    }
    
    count_leaf(1);
    ll q; cin >> q;

    while(q--){
        ll x, y;
        cin >> x >> y;
        print(lef[x] * lef[y]);
    }

    for(ll i = 1; i <= n; i++){
        v[i].clear();
    }
}
int main(){
    fast
    ll t; 
    cin >> t;
    while(t--){
        solve();
    }
}