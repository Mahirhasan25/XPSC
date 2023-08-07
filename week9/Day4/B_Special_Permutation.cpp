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
    int n, a, b;
    cin >> n >> a >> b;
    
    vector<int> ar(n+1);
    for(int i = 1; i <= n; i++)
        ar[i] = i;
    if(a < b) swap(ar[a], ar[b]);

    int mx = 0, mn = INT_MAX;
    for(int i = n; i > n/2; i--)
        mn = min(mn, ar[i]);

    for(int i = n/2; i >= 1; i--)
        mx = max(mx, ar[i]);

    if(mn == a && mx == b){
        for(int i = n; i >= 1; i--)
            cout << ar[i] << ' ';
        cout << '\n';
    }
    else minus;

}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}