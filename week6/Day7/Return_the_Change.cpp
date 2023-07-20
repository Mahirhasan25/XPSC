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
    int cst; cin >> cst;
    int first_val = cst / 10;
    first_val = first_val * 10;
    if(abs(cst - first_val) > 4)
        print(100 - (first_val + 10));
    else print(100 - first_val);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}