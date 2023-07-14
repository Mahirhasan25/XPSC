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
    vector<int> v(n);
    vector<int> diff;
    for(int i = 0; i < n; i++) cin >> v[i];
    diff.pub(abs(v[0] - v[1]));
    diff.pub(abs(v[n - 1] - v[n - 2]));
    for(int i = 1; i < n - 1; i++){
        diff.pub(max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1])));
    }
    int mn = INT_MAX;
    for(auto i : diff)
        mn = min(mn, i);
    print(mn);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}