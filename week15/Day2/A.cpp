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
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int in; cin >> in;
    }
    if(n & 1){
        cout << 4 << '\n';
        cout << 1 << ' ' << n-1 << '\n';
        cout << 1 << ' ' << n-1 << '\n';
        cout << n-1 << ' ' << n << '\n';
        cout << n-1 << ' ' << n << '\n';
    }else{
        cout << 2 << '\n';
        cout << 1 << ' ' << n << '\n';
        cout << 1 << ' ' << n << '\n';
    }
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}