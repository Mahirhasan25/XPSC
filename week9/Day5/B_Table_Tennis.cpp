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
    int n; ll k;
    cin >> n >> k;
    queue<int> q;
    int mx;
    for(int i = 0; i < n; i++){
        int in; cin >> in;
        if(i == 0) mx = in;
        else q.push(in);
    }
    int tm = mx;
    ll tm1 = k;
    while(!q.empty() && tm1 != 0){
        mx = max(mx, q.front());
        if(mx == tm){
            tm1--;
        }
        else{
            tm1 = k;
            tm1--;
            tm = mx;
        }
        q.pop();
    }
    print(mx);
}
int main(){
    fast
    int t = 1; 
    // cin >> t;
    while(t--){
        solve();
    }
}