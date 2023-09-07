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
int l, r;
void s(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(__gcd(i, j) != 1 && i + j >= l && i + j <= r){
                cout << i << ' ' << j << '\n';
                return;
            }
        }
    }
    print(-1);
}
void solve(){
    cin >> l >> r;
    if(r & 1)
        s((r+1)/2);
    else s(r/2);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}