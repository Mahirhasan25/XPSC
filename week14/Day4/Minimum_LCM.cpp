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
    ll ans = INT_MAX;
    ll mx = 0;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            if(i != n)
                mx = max(i, mx);
            if(i * i != n)
                if(n/i != n)
                    mx = max(n/i, mx); 
        }
    }
    cout << mx << ' ' << n - mx << '\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}