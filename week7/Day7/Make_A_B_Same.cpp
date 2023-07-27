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
    int one_cnt1 = 0, zero_cnt1 = 0;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    if(a[0] != b[0] || a[n-1] != b[n-1]){
        cno; return;
    }
    for(int i = 0; i < n; i++){
        if(a[i] == 1 && b[i] == 0){
            cno; return;
        }
    }
    int cnt1 = count(all(a), 1);
    int cnt2 = count(all(b), 1);
    if(cnt1 == 0 and cnt2 >= 1) cno;
    else cyes;
    
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}