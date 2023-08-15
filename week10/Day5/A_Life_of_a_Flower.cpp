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
    int n; cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    int ans = 1;
    for(int i = 0; i < n; i++){
        if(i == 0 and ar[i] == 1) ans++;
        if(i != 0 and ar[i] == 0 and ar[i - 1] == 0){
            ans = -1; break;
        }else if(i != 0 and ar[i] == 1 and ar[i - 1] == 0){
            ans++;
        }else if(i != 0 and ar[i] == 1 and ar[i - 1] == 1) ans += 5;
    }
    print(ans);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}