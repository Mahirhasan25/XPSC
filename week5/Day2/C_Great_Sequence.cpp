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
    int n, x;
    cin >> n >> x;
    map<ll,int> mp;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(all(a));
    int ans = 0;
    for(int i = 0; i < n; i++){

        if(mp[a[i]] == 0) continue;
        if(mp[a[i] * x] > 0 and mp[a[i]] > 0){
            mp[a[i] * x]--;
        }else 
            ans++;
        mp[a[i]]--;
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