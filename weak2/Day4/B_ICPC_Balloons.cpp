/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    set<char> a;
    for(int i = 0; i < n; i++){
        char in;
        cin >> in;
        a.insert(in);
    }
    cout << n + a.size() << '\n';
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