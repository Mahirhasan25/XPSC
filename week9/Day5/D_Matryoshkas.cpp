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
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int in; cin >> in;
        mp[in]++;
    }
    auto it = mp.begin();
    int last = it->first;
    int last_val = it->second;
    int ans = it->second;
    it++;
    for(;it != mp.end(); it++){
        if(last + 1 != it->first)
            ans += it->second;
        else ans += max(0, it->second - last_val);
        last = it->first;
        last_val = it->second;
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