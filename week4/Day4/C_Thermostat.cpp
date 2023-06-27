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
ll operation(ll l, ll r, ll a, ll b, ll x){
    if(a < b){
        if(b - a >= x) return 1;
        else if(r - b >= x) return 2;
        else if(a - l >= x) return 2;
        else if(r - a >= x and b - l >= x) return 3;
        else return -1;
    }else if(a > b){
        if(a - b >= x) return 1;
        else if(b - l >= x) return 2;
        else if(r - a >= x) return 2;
        else if(r - b >= x and a - l >= x) return 3;
        else return -1;
    }
    return 0;
}
void solve(){
    ll l, r, x; cin >> l >> r >> x;
    ll a, b; cin >> a >> b;
    cout << operation(l, r, a, b, x) << '\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}