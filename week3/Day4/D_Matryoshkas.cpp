/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define pub push_back
#define pob pop_back
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);

void solve(){
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int in; cin >> in;
        mp[in]++;
    }
    auto it = mp.begin();
    int last = it->first;
    int ans = it->second;
    int last_count = it->second;
    it++;
    for(;it != mp.end(); it++){
        if(it->first != last+1)
        ans += it->second;
        else
        ans += max(0, it->second - last_count);
        last = it->first;
        last_count = it->second;
    }
    cout << ans << '\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}