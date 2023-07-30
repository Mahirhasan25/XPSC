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
    ll Ax, Ay, Bx, By, Cx, Cy;
    cin >> Ax >> Ay;
    cin >> Bx >> By;
    cin >> Cx >> Cy;
    ll ans = 1;
    if(Ax < Bx && Ax < Cx)
        ans += abs(Ax - min(Bx, Cx));
    if(Ay < By && Ay < Cy)
        ans += abs(Ay - min(By, Cy));
    if(Ax > Bx && Ax > Cx)
        ans += abs(Ax - max(Bx, Cx));
    if(Ay > By && Ay > Cy)
        ans += abs(Ay - max(By, Cy));
    print(ans);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}