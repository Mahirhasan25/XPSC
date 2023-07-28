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
    int a, b, c;
    cin >> a >> b >> c;
    if((a > b && a > c && b < a && b > c && c < a && c < b) || (a < b && a < c && b > a && b < c && c > a && c > b)){
        if(a > b && a > c && b < a && b > c && c < a && c < b) print(a);
        else{
            int i = 2;
            while(true){
                if(i > max({a, b, c})){
                    print(i); return;
                }
                i *=2 ;
            }
        }
    }else minus;
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}