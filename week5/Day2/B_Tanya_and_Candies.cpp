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
#define pub push_back
#define pob pop_back
#define rep(x, y) for(int i = x; i < y; i++)
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

int main(){
    fast
    ll n; cin >> n;
    vector<ll> a(n+1);
    ll tot_sum = 0, od_sum = 0, ev_sum = 0;
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
        if(i % 2 == 0)
            ev_sum += a[i];
        else
            od_sum += a[i];
        tot_sum += a[i];
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0)
            od_sum = tot_sum - (ev_sum + a[i]);
        else
            ev_sum = tot_sum - (od_sum + a[i]);
        if(od_sum == ev_sum) ans++;
    }
    print(ans);
}