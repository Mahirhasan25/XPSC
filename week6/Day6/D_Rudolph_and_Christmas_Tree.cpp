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
    ll n, d, h;
    cin >> n >> d >> h;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >>  a[i];
    }
    long double ans = (long double) (d * h) / 2.0;
    for(int i = 0; i < n - 1; i++){
        if(a[i + 1] >= a[i] + h) ans += (long double) (d * h) / 2.0;
        else{
            long double d2 = (long double) (a[i] + h - a[i + 1]) * d / h;
            long double nh = a[i + 1] - a[i];
            ans += (d + d2) / 2.0 * nh;
        }
    }
    print(ans);
}
int main(){
    fast
    cout.precision(10); cout.setf(ios::fixed);
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}