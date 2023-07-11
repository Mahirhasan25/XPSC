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
    vector<int> v[n];
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int m; cin >> m;
        v[i].resize(m);
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
            mp[v[i][j]]++;
        }
    }
    // for(auto i : mp){
    //     cout << i.first << ' ' << i.second << '\n';
    // }
    // for(int i = 0; i < n; i++){
    //     for(auto j : v[i]){
    //         cout << j << ' ';
    //     }
    //     cout << '\n';
    // }

    vector<int> ans;
    for(int i = 0; i < n; i++){
        bool ok = true;
        for(int j = 0; j < v[i].size(); j++){
            if(mp[v[i][j]] == 1){
                if(ok){
                    ans.pub(v[i][j]);
                    ok = false;
                }
            }
            mp[v[i][j]]--;
        }
    }

    if(ans.size() != n){
        cout << -1;
    }else{
        for(auto i : ans){
            cout << i << ' ';
        }
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
/*
1
3
4
1 2 4 8
3
2 9 1
2
1 4
*/