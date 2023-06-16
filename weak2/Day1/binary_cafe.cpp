#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int n, m;
    cin >> n >> m;
    long long int x = n+1;
    long long int y = pow(2, m) > INT_MAX ? INT_MAX : pow(2, m); 
    long long int ans = min(x,y);
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