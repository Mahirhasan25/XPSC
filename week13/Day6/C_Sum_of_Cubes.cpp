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
unordered_set<ll> cube;
void solve(){
    ll n; cin >> n;
    for(ll i = 1L; i <= 10000L; i++){
        if(i*i*i >= n) break;
        if(cube.count(n - i*i*i)){
            cyes; return;
        }
    }
    cno;
}
int main(){
    fast
    int t; 
    cin >> t;
    for(ll i = 0L; i <= 10000L; i++){
        cube.insert(i*i*i);
    }
    while(t--){
        solve();
    }
}