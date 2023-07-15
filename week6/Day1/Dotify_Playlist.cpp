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
    int n, k, l;

    cin >> n >> k >> l;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        ll ln, lg;
        cin >> ln >> lg;
        if(lg == l)
            v.pub(ln);
    }

    if(v.empty()){
        print(-1);
        return;
    }
    sort(all(v), greater<int>());

    ll sum = 0;
    int i = 0;

    while(!v.empty()){
        sum += v[i];
        i++;
        if(i == k) break;
    }
    if(i == k)
        print(sum);
    else print(-1);
    
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}