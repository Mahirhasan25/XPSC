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
    int a, b, r;
    cin >> a >> b >> r;
    int x, y;
    x = a - 1;
    y = abs(b - r) + r - 1;
    if(x < y) print(1);
    else if(x > y) print(2);
    else print(3);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}