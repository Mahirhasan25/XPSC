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
ll fun(int k){
    int mod = 1e9 + 7;
    int ans = 1;
    for(int i = 1; i <= k; i++)
        ans = (ans * i) % mod;
    return ans;
}
void solve(){
    int n, k;
    cin >> n >> k;
    int per = fun(k);
    print(max(k, per));
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}