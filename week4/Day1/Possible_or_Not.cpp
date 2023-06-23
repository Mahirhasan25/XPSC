/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define pob pop_back
#define pub push_back
#define print(x) cout << x << '\n'
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);

void solve(){
    int n, b; cin >> n >> b;
    vector<int> a(n),c;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        int k = a[i] & b;
        if(k == b){
            c.pub(a[i]);
        }
    }
    // for(auto v : c){
    //     cout << v << ' ';
    // }
    if(c.size() == 0){
        cno; return;
    }
    ll ans = c[0];
    for(int i = 1; i < c.size(); i++){
        ans = ans & c[i];
    }

    if(ans == b) cyes;
    else cno;
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}