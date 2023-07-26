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
    ll a = 1, b = 2, c, d;
    ll n; 
    cin >> n;
    bool flag = false;
    if(n == 0){
        cout << 2 << ' ' << 3 << ' ' << 4 << ' ' << 6 << '\n';
        return;
    }
    for(ll c_ = 3; c_ <= 1e6; c_++){
        ll x = c_ ^ n;
        if(x > 2 && c_ != x){
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