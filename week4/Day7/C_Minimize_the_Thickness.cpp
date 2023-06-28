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
    ll n; cin >> n;
    vector<ll> v(n);
    ll mx = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<ll> pre(n);
    pre[0] = v[0];
    for(int i = 1; i < n; i++){
        pre[i] = pre[i - 1] + v[i];
    }

    ll ans = 2003;
    for(int x = 0; x < n; x++){
        ll i = 0, j = 0, sum = 0, len = 0;
        while(j < n){
            sum += v[j];
            if(sum == pre[x]){
                len = max(len, j - i + 1);
                i = j;
                i++;
                sum = 0;
            }
            j++;
        }
        if(sum != 0 and sum != pre[i])
            len = n;
        ans = min(ans, len);
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