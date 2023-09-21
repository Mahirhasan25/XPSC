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
    stack<char> st;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }else{
            if(st.top() == 'A' && s[i] == 'B')
            {
                while(!st.empty() && st.top() == 'A')
                {
                    st.pop();
                    cnt++;
                }
                st.push('B');
                st.push('C');
                continue;
            }
            if(st.top() == 'B' && s[i] == 'A')
            {
                st.pop();
                cnt++;
                st.push('B');
                continue;
            }
            st.push(s[i]);
        }
    }
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