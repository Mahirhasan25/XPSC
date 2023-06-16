/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
vector<int>ans;
void mov_cnt(int n){
    int x; string s;
    cin >> x >> s;
    for(int i = x-1 ; i >= 0; i--){
        if(s[i] == 'D'){
            n = (n+1)%10;
        }else{
            if(n == 0){
                n = 9;
            }else
                n--;
        }
    }
    ans.push_back(n);
}
void solve(){
    int n;
    cin >> n;
    vector<int>mov(n);
    for(int i = 0; i < n ; i++){
        cin >> mov[i];
    }
    for(int i = 0; i < n; i++){
        mov_cnt(mov[i]);
    }
    for(auto v : ans) cout << v << ' ';
    ans.clear();
    cout << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
    for(auto v : ans) cout << v << ' ';
    cout << '\n';
}