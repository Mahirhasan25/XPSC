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
    if(n & 1){
        print(-1);
        return;
    }
    if(n == 2){
        cout << 1 << ' ' << 2 << '\n';
        return;
    }
    cout << 1 << ' ' << 2 << ' ';
    int i = 3;
    while(i <= n){
        if(i & 1) cout << i + 1 << ' ';
        else cout << i - 1 << ' ';
        i++;
    }
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