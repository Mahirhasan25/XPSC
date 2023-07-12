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
    int x, y, z;
    cin >> x >> y >> z;
    if((x*y) % z == 0)
        cout << x*y << ' ' << z << '\n';
    else if((y*z) % x == 0)
        cout << y*z << ' ' << x << '\n';
    else if((x*z) % y == 0)
        cout << x*z << ' ' << y << '\n';
    else print(-1);

}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}