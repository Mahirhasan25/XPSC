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
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int g = a[0];
    for(int i = 1; i < n; i++){
        g = gcd(g, a[i]);
    }
    if(g == 1) print(0);
    else if(gcd(g, n) == 1) print(1);
    else if(gcd(g, n - 1) == 1) print(2);
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