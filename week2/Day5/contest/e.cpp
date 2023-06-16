/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    bool flag = true;
    for(int i = 0; i < n - 2; i++){
        if(v[i] % 2 == 0 and v[i+2] % 2 == 0 or v[i] % 2 != 0 and v[i+2] % 2 != 0){
            continue;
        }
        flag = false;
    }
    if(flag)
    cout << "YES" << '\n';
    else
    cout << "NO" << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}