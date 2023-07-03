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
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

void solve(){
    string s; cin >> s;
    ll first = (s[0] - 'a') + 1;
    ll last = (s[s.size() - 1] - 'a') + 1;

    ll mx = max(first, last);
    ll mn = min(first, last);

    vector<pair<ll, ll>> v;
    for(ll i = 0; i < s.size(); i++){
        ll in = (s[i] - 'a') + 1;
        if(in >= mn and in <= mx){
            v.push_back({in, i+1});
        }
    }

    if(first > last) 
        sort(all(v), greater<pair<ll,ll>>());
    else
        sort (all(v));

    ll cost = 0;
    for(ll i = 0; i < v.size() - 1; i++){
        cost += abs(v[i].first - v[i+1].first);
    }
    cout << cost << ' ' << v.size() << '\n';
    cout << '1' << ' ';
    for(auto i : v){
        if(i.second != 1 and i.second != s.size())
            cout << i.second << ' ';
    }
    cout << s.size();
    cout << '\n';
}
int main(){
    fast
    ll t; 
    cin >> t;
    while(t--){
        solve();
    }
}