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
    vector<int> a(3), b(3);
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 3; i++){
        cin >> b[i];
    }

    sort(all(a), greater<int>()); sort(all(b), greater<int>());
    if((a[0] + a[1]) > b[0] + b[1])
        print("Alice");
    else if((a[0] + a[1]) < b[0] + b[1])
        print("Bob");
    else print("Tie");
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}