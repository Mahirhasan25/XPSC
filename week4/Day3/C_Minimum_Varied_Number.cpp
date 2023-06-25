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
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

void solve(){
    int sum; cin >> sum;
    string s = "";
    for(int i = 9; i >= 1; i--){
        if(sum >= i){
            s = char(i + '0') + s;
            sum -= i;
        }
    }
    print(s);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}