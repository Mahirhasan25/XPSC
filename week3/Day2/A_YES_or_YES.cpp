/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'

void solve(){
    string a = "YES", b = "yES", c = "yeS", d = "Yes", e = "YEs", f = "YeS", g = "yes" ,h = "yEs";
    string s; cin >> s;
    if(a == s or b == s or c == s or d == s or e == s or f == s or g == s or h == s) cyes;
    else cno; 
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