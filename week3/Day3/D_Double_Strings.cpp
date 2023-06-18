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
    map<string, bool> mp;
    int n; cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
        mp[s[i]] = true;
    }
    string ans = "";
    for(int i = 0; i < n; i++){
        string st = s[i]; bool ok = true;

        for(int j = 1; j <= st.size() - 1; j++){
            string pre = st.substr(0, j), suff = st.substr(j, st.size());
            if(mp[pre] == true and mp[suff] == true){
                ans += '1';  ok = false; break;
            }
        }
        if(ok) ans += '0';
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