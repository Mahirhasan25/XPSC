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
    int n, m, k, h;
    cin >> n >> m >> k >> h;
    vector<int> a(n), dif;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] += h;
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            dif.pub(abs(a[i] - a[j]));
        }
    }
    map<ll,bool> mp;
    for(int i = 1; i <= m; i++){
        mp[i*k] = true;
    }
    int cnt = 0;
    for(int i = 0; i < dif.size(); i++){
        if(mp[dif[i]]) cnt++;
    }
    print(cnt);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}