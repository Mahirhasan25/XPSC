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
    if(n < 50){
        int rem = 50 - n;
        if(rem & 1) print(rem / 2 + 3);
        else print(rem/2);
    }else if(n > 50){
        int rem = n - 50;
        if(rem % 3 == 1)
            print(rem/3 + 2);
        else if(rem % 3 == 2)
            print(rem /3 + 4);
        else print(rem/3);  
    }else print(0);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}