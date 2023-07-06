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
    string s;
    cin >> s;
    map<char,bool> mp;
    int i = 0, cnt = 0, unq = 0;
    while(i < s.size()){
        if(mp[s[i]] == false){
            unq++;
            mp[s[i]] = true;
        }
        if(unq > 3){
            cnt++;
            mp.clear();
            mp[s[i]] = true;
            unq = 1;
        }
        i++;
    }
    cnt++;
    print(cnt);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}