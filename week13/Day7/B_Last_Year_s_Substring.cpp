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
    string s; cin >> s;
    if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0'){
        cyes; return;
    }
    if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0'){
        cyes; return;
    }
    if(s[0] == '2' && s[1] == '0' && s[n-2] == '2' && s[n-1] == '0'){
        cyes; return;
    }
    if(s[0] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0'){
        cyes; return;
    }
    if(s[n-4] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0'){
        cyes; return;
    }
    cno;
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}