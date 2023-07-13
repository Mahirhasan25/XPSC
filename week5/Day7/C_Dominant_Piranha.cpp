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
    vector<int> v(n);
    int mx = -1, idx = -1;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(mx < v[i]){
            mx = v[i];
        }
    }
    bool ok = true;
    for(int i = 0; i < n-1; i++){
        if(v[i] != v[i+1]){
            ok = false;
        }
    }
    if(ok)print(-1);
    else{
        for(int i = 0; i < n; i++){
            if(v[i] == mx){
                if(i - 1 >= 0){
                    if(v[i - 1] < mx){
                        idx = i;
                        break;
                    }
                }
                if(i + 1 < n){
                    if(v[i + 1] < mx){
                        idx = i;
                        break;
                    }
                }
            }
        }
        print(idx + 1);
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