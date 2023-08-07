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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n+m);
    for(int i = 0; i < n+m; i++) cin >> a[i];
    sort(a.begin(), a.end() - 1);
    reverse(all(a));
    ll sum = 0;
    for(int i = 0; i < n; i++) sum += a[i];
    print(sum);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}