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
    int n, m; cin >> n >> m;
    vector<string> ch(n);
    for(int i = 0; i < n; i++){
        cin >> ch[i];
    }
    ll ans = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            string s1 = ch[i], s2 = ch[j]; ll sum = 0;
            for(int i = 0; i < m; i++){
                sum += abs(s1[i] - s2[i]);
            }
            ans = min(ans, sum);
        }
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