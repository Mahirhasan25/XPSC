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
    vector<int> a(n);
    rep(0,n){
        cin >> a[i];
    }
    vector<int> b = a;
    sort(all(b));
    int val = 0;
    for(int i = 0; i < n-1; i++){
        if(b[i] == b[i+1]){
            val = b[i];
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i] != val){
            print(i+1);
            break;
        }
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