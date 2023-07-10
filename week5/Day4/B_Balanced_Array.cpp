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
    if((n/2) % 2 != 0)
        cno;
    else{
        cyes;
        ll sum = 0;int ev = 2;
        for(int i = 0; i < n/2; i++){
            cout << ev << ' ';
            sum += ev;
            ev += 2;
        }
        int od = 1;
        for(int i = 0; i < n/2 - 1; i++){
            cout << od << ' ';
            sum -= od;
            od += 2;
        }
        print(sum);
    }
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}