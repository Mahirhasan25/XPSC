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
int fun(int n){
    string s = to_string(n);
    int mn = 10, mx = -1;
    for(int i = 0; i < s.size(); i++){
        mx = max(mx, s[i] - '0');
        mn = min(mn, s[i] - '0');
    }
    return mx - mn;
}
void solve(){
    int l, r; cin >> l >> r;
    int ans = l; 
    int diff = fun(l); 
    for(int i = l + 1; i <= min(r, l+100); i++){
        if(diff < fun(i)){
            diff = fun(i);
            ans = i;
        }
    }
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