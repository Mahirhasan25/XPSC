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
    vector<int> a(n);
    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    if(a.size() == 1){
        print(0);
        return;
    }
    map<ll,int> mp;
    for(int i = 0; i < n; i++){
        for(ll j = a[i]; j <= mx;){
            mp[j]++;
            j += a[i];
        }
    }
    int ans = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i] >= 1 && a[i] <= n)
            ans = max(ans, mp[a[i]]);
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