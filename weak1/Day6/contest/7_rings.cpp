#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    int x = n * m;
    string s = to_string(x);
    if(s.size() == 5 and s.front() != '0'){
        cout << "YES" << '\n';
    }else{
        cout << "NO" << '\n';
    }
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