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
    int ans = count(all(s), 'A');
    if(s[0] == 'B' || s.back() == 'B')
    {
        print(ans);
        return;
    } 
    vector<int> pos;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'B')
        {
            pos.pub(i);
        }
    }
    if(pos.empty())
    {
        print(0);
        return;
    } 
    int mn = 1 << 30;
    for(int i = 1; i < pos.size(); i++)
    {
        mn = min(mn, pos[i] - pos[i - 1] - 1);
    }
    mn = min(mn, pos[0]);
    mn = min(mn, (int)(s.size() - pos.back() - 1));
    print(ans - mn);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}