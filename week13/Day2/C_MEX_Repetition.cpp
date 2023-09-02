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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<bool> vis(n+1);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        vis[a[i]] = true;
    }
    int mising = -1;
    for(int i = 0; i <= n; i++){
        if(vis[i] == false) mising = i;
    }
    deque<int> dq(all(a));
    k %= n+1;
    for(int i = 0; i < k; i++){
        dq.push_front(mising);
        mising = dq.back();
        dq.pop_back();
    }
    for(auto i : dq) cout << i << ' ';
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