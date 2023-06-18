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
    int n; cin >> n;
    vector<ll> a(n),b(n);
    string s; cin >> s;
    vpair cnt;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'L'){
            ans += i;
            a[i] = i;
        }
        if(s[i] == 'R'){
            ans += n - i - 1;
            a[i] = n - i - 1;
        }
    }
    for(int i = 0; i < n; i++){
        if(s[i] == 'R'){
            b[i] = i;
        }
        if(s[i] == 'L'){
            b[i] = n - i - 1;
        }
    }
    // for(auto v : a) cout << v << ' ';
    // cout << '\n';
    // for(auto v : b) cout << v << ' ';
    vpair vp(n);
    for(int i = 0; i < n; i++){
        vp[i] = {b[i],a[i]};
    }
    sort(vp.begin(), vp.end(), greater<pair<ll,ll>>());
    // for(auto v : vp) cout << v.first << ' ' << v.second << '\n';
    for(int i = 0; i < n; i++){
        if(vp[i].first > vp[i].second){
            ans = ans + vp[i].first - vp[i].second;
        }
        cout << ans << ' ';
    }
    cout << '\n';
    // cout << ans;
    // for(int i = 0; i < n; i++){
    //     cnt.pub({max(i, n - i - 1), min(i, n - i - 1)});
    // }
    // sort(cnt.begin(), cnt.end(), greater<pair<ll,ll>>());
    // for(auto v : cnt){
    //     ll add = max(v.first,v.second);
    //     ll mns = min(v.first,v.second);
    //     ans += add; ans -= mns;
    //     cout << ans << ' ';
    // }
    // cout << '\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}