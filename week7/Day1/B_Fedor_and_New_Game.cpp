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
int cnt(int n){
    int cnt = 0;
    while(n){
        cnt += n & 1;
        n >>= 1;
    }
    return cnt;
}
void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m+1);
    int ans = 0;
    for(int i = 0; i <= m; i++) cin >> v[i];
    for(int i = 0; i < m; i++){
        if(cnt(v[m] ^ v[i]) <= k) ans++;
    }
    print(ans);
}
int main(){
    fast
    int t = 1; 
    // cin >> t;
    while(t--){
        solve();
    }
}