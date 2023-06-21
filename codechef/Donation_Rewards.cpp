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
#define print(x) cout << x << '\n'
#define pub push_back
#define pob pop_back
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);

void solve(){
    int n; cin >> n;
    if(n <= 3) print("BRONZE");
    else if(n > 3 and 6 >= n) print("SILVER");
    else if(n > 6) print("GOLD");
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}