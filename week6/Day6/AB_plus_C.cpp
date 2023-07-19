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
    ll w = 1e6;
    ll n; cin >> n;
    if(n <= 1){
        minus; return;
    }
    if(n <= w) cout << 1 << ' ' << 1 << ' ' << n - 1 << '\n';
    else if(n > w && n % w != 0)
        cout << n << ' ' << n/w << ' ' << n % w << '\n';
    else cout << n << ' ' << (n/w) - 1 << ' ' << n << '\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}