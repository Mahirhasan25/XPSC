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
    unordered_map<ll, ll> occ;
    vector<pair<ll, ll>> v(n+1);
    for(int i  = 1; i <= n; i++)
    {
        v[i].first = i;
        cin >> v[i].second;
        occ[v[i].second]++;
    }
    bool ok = false;
    for(auto i : occ)
    {
        if(i.second < 2)
        {
            ok = true;
            break;
        }
    }
    if(ok)
    {
        print(-1);
        return;
    }
    for(int i = 1; i < n; i++)
    {
        if(v[i].second == v[i + 1].second)
        {
            swap(v[i].first, v[i +  1].first);
        }
    }
    for(auto i : v)
    {
        if(i.first != 0)
            cout << i.first << ' ';
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