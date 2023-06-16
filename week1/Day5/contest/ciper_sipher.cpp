#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s, r;
    cin >> s;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(s[i] == s[j]){
                r.push_back(s[j]);
                i = j;
                break;
            }
        }
    }
    cout << r << '\n';
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