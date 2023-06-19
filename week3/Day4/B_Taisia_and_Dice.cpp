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
    int n, s, r;
    cin >> n >> s >> r;
    int mx = s - r;
    cout << mx;
    for(int i = 2; i <= n; i++){
        int mn_value = n - i;
        int cur = r - mn_value;
        mx = min(mx , cur);
        cout << ' ' << mx;
        r -= mx;
    }
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