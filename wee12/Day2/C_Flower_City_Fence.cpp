/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define minus cout << "-1" << '\n'
#define pub push_back
#define pob pop_back
#define rep(x, y) for(int i = x; i < y; i++)
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    if(v[1] != n){
        cno; return;
    }
    vector<int> b;
    for(int i = n; i >= 1; i--){
        while(b.size() < v[i]){
            b.push_back(i);
        }
    }
    for(int i = 1; i < n; i++){
        if(v[i] != b[i - 1]){
            cno; return;
        }
    }
    cyes;
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}