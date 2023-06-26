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
    vector<pair<int,int>> vp(n);
    for(int i = 0; i < n; i++){
        cin >> vp[i].first;
        vp[i].second = i;
    }
    string s; cin >> s;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(vp[i].first == vp[j].first){
                if(s[vp[i].second] != s[vp[j].second]){
                    cno; return;
                }
            }
        }
    }
    cyes;
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}