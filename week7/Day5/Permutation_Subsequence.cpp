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
    ll mod =  1e9 + 7;
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(all(a));

    map<int , ll> mp;
    vector<int> b;
    int v = a[0];
    b.pub(v);
    mp[v] = 1;

    for(int i = 1; i < n; i++){
        if(abs(v - a[i]) > 1) break;
        else{
            v = a[i];
            b.pub(v);
            mp[v]++;
        }
    }
    ll ans = mp.size(), occ = 1;
    for(auto i : mp){
        ans = (ans * i.second) % mod;
        if(i.second >= 2)
            occ = (occ * i.second) % mod;
    }
    if(occ != 1)
        cout << (ans - (occ - 1)) << '\n';
    else
        cout << ans << '\n';  
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}