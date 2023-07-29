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
    vector<pair<ll,int>> a; 
    vector<int> idx;
    for(int i = 0; i < n; i++){
        ll in; cin >> in;
        if(in % k == 0) idx.pub(i+1);
        else a.pub({in % k, i});
    }
    sort(all(a),[&](pair<ll,int>x, pair<ll,int>y){
        if(x.first == y.first) return x.second < y.second;
        return x.first > y.first;
    });
    for(auto i : a)idx.pub(i.second + 1);
    for(auto i : idx) cout << i << ' ';
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