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
    for(int i = 1; 0 < n - i; i++){
        if(n - i == m + i){
            cout << "YES" << '\n';
            return;
        } 
    }
    for(int i = 1; 0 < m - i; i++){
        if(m - i == n + 3*i){
            cout << "YES" << '\n';
            return;
        }
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