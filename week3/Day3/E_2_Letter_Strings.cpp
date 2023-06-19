/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define pub push_back
#define pob pop_back
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);

void solve(){
    int n; cin >> n;
    vector<string> s(n);
    map<char,ll> first, last;
    map<string, ll> occ;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        first[s[i][0]]++;
        last[s[i][1]]++;
        occ[s[i]]++;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        
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