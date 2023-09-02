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
    int x, i = 0;
    cin >> x;
    vector<int> ans;
    while ((1 << i) <= x)
    {
        ans.push_back((1 << i));
        i++;
    }
    if(ans.back() != x){
        int diff = x - ans.back();
        for(int i = 30; i >= 0; i--){
            if(diff & (1 << i)){
                ans.push_back(ans.back() + (1 << i));
            }
        }
    }
    reverse(all(ans));
    print((int)ans.size());
    for(auto i : ans) cout << i << ' ';
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