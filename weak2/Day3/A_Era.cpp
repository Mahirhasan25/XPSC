/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int in;
        cin >> in;
        ans = max(ans, in - i);
    }
    cout << ans << '\n';
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