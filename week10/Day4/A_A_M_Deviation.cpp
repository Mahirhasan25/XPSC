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
    ll a, b, c;
    cin >> a >> b >> c;
    ll sum = abs(a+c-2*b);
    if(sum % 3 == 0) print(0);
    else print(1);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}