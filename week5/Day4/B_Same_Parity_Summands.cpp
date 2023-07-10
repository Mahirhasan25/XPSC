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
    int n, k; cin >> n >> k;
    if(n < k){
        cno; return;
    }
    if(n > 1 * (k - 1) and (n - 1 * (k - 1)) % 2 != 0){
        cyes;
        for(int i = 0; i < k - 1; i++){
            cout << '1' << ' ';
        }
        cout << (n - 1 * (k - 1)) << '\n';
        return;
    }
    else if(n > 2 * (k - 1) and (n - 2 * (k - 1)) % 2 == 0){
        cyes;
        for(int i = 0; i < k - 1; i++){
            cout << '2' << ' ';
        }
        cout << (n - 2 * (k - 1)) << '\n';
        return;
    }
    else cno;
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}