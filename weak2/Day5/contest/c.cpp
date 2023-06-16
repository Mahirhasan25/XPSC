/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin >> n;
    vector<ll>v(n);
    unordered_map<ll,ll>freq;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        freq[v[i]]++;
    }
    int value = 0;
    for(int i = 0; i < n; i++){
        if(freq[v[i]] >= 3){
            value = v[i];
        }
    }
    if(value != 0)
    cout << value << '\n';
    else
    cout << "-1" << '\n';
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