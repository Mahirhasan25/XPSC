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
    int n, q;
    cin >> n >> q;
    map<int,int> left,right;
    for(int i = 1; i <= n; i++){
        int in; cin >> in;
        if(left[in] == 0)
            left[in] = i;
        right[in] = i;
    }
    while(q--){
        int x, y;
        cin >> x >> y;
        if(left[x] and right[y] and left[x] < right[y]){
            cyes;
        }else cno;
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