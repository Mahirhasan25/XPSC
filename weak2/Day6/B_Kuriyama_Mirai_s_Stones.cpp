/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
const int N = 1e5 + 5;
ll pfx_sum1[N], pfx_sum2[N];
void solve(){
    int typ, l, r;
    cin >> typ >> l >> r;
    if(typ == 1){
        cout << pfx_sum1[r] - pfx_sum1[l-1] << '\n';
    }else{
        cout << pfx_sum2[r] - pfx_sum2[l-1] << '\n';
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin >> n; 
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        pfx_sum1[i + 1] = pfx_sum1[i] + v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        pfx_sum2[i + 1] = pfx_sum2[i] + v[i];
    }
    cin >> t;
    while(t--){
        solve();
    }
}