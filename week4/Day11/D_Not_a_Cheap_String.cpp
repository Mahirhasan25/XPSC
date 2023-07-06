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
    string s; cin >> s;
    int p; cin >> p;
    string w(s);

    ll cost = 0;
    for(int i = 0; i < s.size(); i++)
        cost += s[i] - 'a' + 1;

    sort(w.rbegin(), w.rend());
    map<char, int> del;

    for(int i = 0; i < w.size(); i++){
        if(cost > p){
            del[w[i]]++;
            cost -= w[i] - 'a' + 1;
        }
    }

    for(int i = 0; i < s.size(); i++){
        if(del[s[i]] > 0){
            del[s[i]]--;
            continue;
        }
        cout << s[i];
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