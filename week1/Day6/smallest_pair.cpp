#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> A(n + 1);
    int mn = 1e8;
    for(int i = 1; i <= n; i++) cin >> A[i];
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            mn = min(mn, A[i] + A[j] + j - i);
        }
    }
    cout << mn << '\n';
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}