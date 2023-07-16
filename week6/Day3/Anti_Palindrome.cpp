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
    string s; cin >> s;
    map<char, int> mp;
    bool ok = true;
    for(int i = 0; i < n - 1; i++){
        if(s[i] != s[i + 1]) ok = false;
        mp[s[i]]++;
        if(i + 1 == n - 1)
            mp[s[i + 1]]++;
    }
    if(ok){
        if(s.size() & 1)
            print(2);
        else print(1);
    }else{
        int od_ch_cnt = 0;
        for(auto i : mp){
            if(i.second & 1){
                od_ch_cnt++;
            }
        }
        if(od_ch_cnt >= 2) print(0);
        else print(1);
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