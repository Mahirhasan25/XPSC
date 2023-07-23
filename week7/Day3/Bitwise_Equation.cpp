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
    ll a = 1, b = 4, c = 0, d = 0;
    ll n; 
    cin >> n;
    bool flag = false;
    for(ll c_ = 1; c_ <= 1e9; c_++){
        ll x = c_ ^ n;
        if(x >= 1LL && x <= 1e18){
            d = x;
            c = c_;
            flag = true;
            break;
        }
    }
    for(ll c_ = 1e9 + 1; c_ <= 1e18 and !flag; c_++){
        ll x = c_ ^ n;
        if(x >= 1LL && x <= 1e18){
            d = x;
            c = c_;
            flag = true;
            break;
        }
    }
    if(flag)
        cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    else minus;
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
} 