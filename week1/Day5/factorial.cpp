#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    long long int mul = 1;
    if(n == 0 or n == 1){
        cout << "1"<< '\n';
        return;
    } 
    for(int i=1;i<=n;i++){
        mul *= i;
    }
    cout << mul << '\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}