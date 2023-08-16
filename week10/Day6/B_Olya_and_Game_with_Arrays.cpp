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
    int n; cin >> n;
    vector<vector<int>> a(n);
    for(int i = 0; i < n; i++){
        int m; cin >> m;
        for(int j = 0; j < m; j++){
            int in; cin >> in;
            a[i].push_back(in);
        }
        sort(all(a[i]));
    }
    vector<int> secod_mn;
    int mn = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            if(j == 1)
                secod_mn.pub(a[i][j]);
            mn = min(mn, a[i][j]);
        }
    }
    sort(all(secod_mn), greater<int>());
    ll ans = 0;
    for(int i = 0; i < n - 1; i++){
        ans += secod_mn[i];
    }
    ans += mn;
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