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
    ll n, k;
    cin >> n >> k;
    ll od_num, ev_num;
    if(n & 1)
        od_num = (n / 2) + 1;
    else
        od_num = n / 2;
    if(n >= 2*k){
        int left_od = od_num - k;
        if(left_od & 1) cno;
        else cyes;
    }else cno;
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}