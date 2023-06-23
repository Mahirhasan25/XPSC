/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define pub push_back
#define pob pop_back
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
vector<ll>pal;
bool is_pal(ll n){
    string s = to_string(n);
    string temp = s;
    reverse(all(temp));
    return s == temp;
}
void solve(){
    ll n;
    unordered_map<ll, ll> mp;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        for(auto v : pal){
            ll k = a[i] ^ v;
            ans += mp[k];
        }
    }
    cout << (ans+n)/2 << '\n';
}
int main(){
    fast
    for(ll i = 0; i <= (1<<15); i++){
        if(is_pal(i)) pal.push_back(i);
    }
    // for(int i = 0; i < 20; i++){
    //     cout << pal[i] << ' ';
    // }
    ll t; 
    cin >> t;
    while(t--){
        solve();
    }
}