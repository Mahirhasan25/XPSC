/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define pub push_back
#define pob pop_back
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
int fun(string s){
    if(s.back() == 'M') return 0;
    if(s.back() == 'L') return s.size();
    return -s.size(); 
}
void solve(){
    string a, b;
    cin >> a >> b;
    int x = fun(a);
    int y = fun(b);
    if(x > y) print(">");
    else if( x < y) print("<");
    else print("=");
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}