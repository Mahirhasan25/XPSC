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
    ll n, k; cin >> n >> k;
    vector<pair<int,int>> vp(n);
    for(int i = 0; i < n; i++){
        cin >> vp[i].first;
    }
    for(int i = 0; i < n; i++){
        cin >> vp[i].second;
    }
    sort(all(vp));
    for(int i = 0; i < n; i++){
        if(vp[i].first <= k)
            k += vp[i].second;
    }
    print(k);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}