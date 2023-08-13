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
#define pub push_back
#define pob pop_back
#define rep(x, y) for(int i = x; i < y; i++)
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

int main(){
    fast
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;

    ll l = 1, r = LLONG_MAX, ans = -1;
    while(l <= r){
        ll ht = l + (r - l)/2LL;
        ll s = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] - ht > 0)
                s += a[i] - ht;
        }
        if(s >= m){
            ans = ht;
            l = ht + 1;
        }else{
            r = ht - 1;
        }
    }
    cout << ans;
}