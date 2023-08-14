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
    int n, h;
    cin >> n >> h;
    ll ar[n];
    for(auto &i : ar) cin >> i;
    sort(ar, ar + n, greater<int>());
    // for(auto i : ar) cout << i << ' ';
    // cout << '\n';
    int mx1 = ar[0], mx2 = ar[1];
    // cout << mx1 << ' ' << mx2 << '\n';
    bool flag = true;
    int ans = 0;
    while(h > 0){
        if(flag){
            h -= mx1;
            flag = false;
            ans++;
        }else{
            h -= mx2;
            flag = true;
            ans++;
        }
    }
    print(ans);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}