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
    int x, y; cin >> x >> y;
    vector<int> prm_f = {2, 3, 5, 7};
    int val;
    for(int i = 0; i < 4; i++){
        if(x % prm_f[i] == 0)
        {
            val = prm_f[i];
            break;
        }
    }
    if((y - (x + val)) % 2 == 0)
        print((y - (x + val)) / 2 + 1);
    else print((y - (x + val)) / 2 + 2); 
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}