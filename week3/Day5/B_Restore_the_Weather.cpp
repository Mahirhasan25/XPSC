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
    int n, m; cin >> n >> m;
    vector<pair<int,int>> a(n);
    vector<int> b(n), ans(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    for(auto &i : b) cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++){
        ans[a[i].second] = b[i];
    }
    for(auto v : ans) cout << v << ' ';
    cout << '\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}