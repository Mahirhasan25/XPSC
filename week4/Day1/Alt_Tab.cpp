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
    stack<string> st;
    map<string, int> mp;
    while(n--){
        string s;
        cin >> s;
        st.push(s);
        mp[s] = 1;
    }
    while(!st.empty()){
        string s = st.top();
        if(mp[s] == 1){
            cout << s.substr(s.size() - 2, s.size());
            mp[s] = 0;
        }
        st.pop();
    }
}
int main(){
    fast
    int t = 1; 
    // cin >> t;
    while(t--){
        solve();
    }
}