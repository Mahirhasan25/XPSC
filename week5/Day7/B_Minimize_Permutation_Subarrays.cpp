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
    int idx_n= -1, idx_1 = -1, idx_2 = -1;
    for(int i = 1; i <= n; i++){
        int in; cin >> in;
        if(in == 1) idx_1 = i;
        else if(in == 2) idx_2 = i;
        else if(in == n) idx_n = i;
    }
    if(idx_n > idx_1 && idx_n > idx_2)
        cout << idx_n << ' ' << max(idx_1, idx_2) << '\n';
    else if(idx_n < idx_1 && idx_n < idx_2)
        cout << idx_n << ' ' << min(idx_1, idx_2) << '\n';
    else cout << "1 1" << '\n';
    
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}