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
    string s; cin >> s;
    ll ans = 0;
    unordered_map<char, bool> vis;
    for(ll i = 0; i < n; i++){
        if(s[i] == '0'){
            for(ll j = i+1; j <= n ; j += i+1){
                if(s[j-1] == '1')  break;
                if(vis[s[j-1]]) continue;
                ans += j;
                vis[s[j-1]] = true;
            }
        }
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