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
    int sz; cin >> sz;
    string s; cin >> s;
    bool r_w = true, z_w = false;
    stack<char> st;
    for(int i = 0; i < sz; i++){
        if(!st.empty() and s[i] != st.top()){
            st.pop();
            if(r_w){
                r_w = false;
                z_w = true;
                continue;
            }else{
                z_w = false;
                r_w = true;
                continue;
            }
        }
        st.push(s[i]);
    }
    if(r_w) print("Ramos");
    else print("Zlatan");
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}