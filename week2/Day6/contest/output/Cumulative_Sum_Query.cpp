/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pfx_sum[100000 + 5];
void solve(){
    int i, j;
    cin >> i >> j;
    cout << pfx_sum[j+1] - pfx_sum[i] << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> n; 
   
    for(int i = 1; i <= n; i++){
        int in;
        cin >> in;
        pfx_sum[i] = pfx_sum[i-1] + in;
    }
    cin >> t;
    while(t--){
        solve();
    }
}