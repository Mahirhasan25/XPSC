#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    if(n == 0 and m == 0){
        cout << "NO" << '\n';
    }
    if(n == m){
        cout << "YES" << '\n';
        return;
    }
    if(n - 1 == m + 1){
        cout << "YES" << '\n';
        return;
    }
    if(m - 1 == n + 3){
        cout << "YES" << '\n';
        return;
    }
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