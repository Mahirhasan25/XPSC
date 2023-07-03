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
int digit(string s){
    return (s[0] - '0')*10 + (s[1] - '0');
}
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    reverse(all(s));
    int i = 0;
    string ans = ""; 
    vector<char> v;
    while(i<n){
        if(s[i] == '0'){
            i++;
            ans += s[i+1]; ans += s[i]; 
            i += 2;
            v.pub(char(digit(ans) + 96));
            ans = "";
        }else{
            v.pub(char(s[i] - '0' + 96));
            i++;
        }
    }
    reverse(all(v));
    for(auto i : v)
        cout << i;
    cout << '\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}