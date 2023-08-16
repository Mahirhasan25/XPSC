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
    int n, s;
    cin >> n >> s;
    int ar[n];
    for(auto &i : ar) cin >> i;
    int l = 0, r = 0;
    ll cmp = 0;int mx = INT_MIN;
    while(r < n){
        s += ar[r];
        if(cmp < s){
            r++;
        }
        else if(cmp == s){
            mx = max(mx, r - l + 1);
            l++;
            r = l;
        }
    }
    print(mx);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}