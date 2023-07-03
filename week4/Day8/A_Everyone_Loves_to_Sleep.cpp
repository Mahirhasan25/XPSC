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
#define forn(x, y) for(int i = x; i < y; i++)
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

void solve(){
    int n, hh, mm;
    cin >> n >> hh >> mm;
    int bed_tm = hh*60 + mm;
    int ans = 1e9;
    forn(0,n){
        int x, y; 
        cin >> x >> y;
        int alrm_tm = x*60 + y;
        int sleep_tm = alrm_tm - bed_tm;
        if(sleep_tm < 0)
            sleep_tm += 24*60;
        ans = min(ans, sleep_tm);
    }
    cout << ans / 60 << ' ' << ans % 60 << '\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}