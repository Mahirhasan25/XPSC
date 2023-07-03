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
    int n, s; cin >> n >> s;
    vector<int> v(n);
    map<int, bool> mp;
    int mx = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]] = true;
        mx = max(mx, v[i]);
    }
    int i = 1;
    while(s > 0){
        if(mp[i] == false){
            mp[i] = true;
            s -= i;
            mx = max(mx , i);
        }
        i++;
    }
    if(mp.size() == mx and s == 0) cyes;
    else cno;
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}