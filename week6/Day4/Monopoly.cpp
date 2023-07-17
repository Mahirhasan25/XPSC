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
    vector<int> a(4);int mx = -1;
    for(int i = 0; i < 4; i++){
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    int sum = 0;
    map<int, bool> mp;
    for(int i = 0; i < 4; i++){
        if(a[i] == mx and mp[a[i]] == false){
            mp[a[i]] = true;
            continue;
        }
        sum += a[i];
    }
    if(mx > sum) cyes;
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