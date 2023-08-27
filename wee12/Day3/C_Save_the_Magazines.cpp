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
    int n;
    string s;
    cin >> n;
    cin >> s;
    s = '0' + s;
    vector<int>v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    int i = 0;
    int ans = 0;

    while(i <= n){
        int mn = v[i];
        int sm = v[i];
        int j = i + 1;
        while(j <= n && s[j] == '1'){
            mn = min(mn, v[j]);
            sm += v[j];
            j++;
        }
        ans += sm - mn;
        i = j;
    }
    print(ans);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}