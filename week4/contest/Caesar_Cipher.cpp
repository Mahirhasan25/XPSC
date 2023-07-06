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
    int sz; cin >> sz;
    string x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    vector<int> dis;
    for(int i = 0; i < sz; i++){
        if(y[i] - x[i] < 0)
            dis.pub((y[i] - x[i]) + 26);
        else
            dis.pub(y[i] - x[i]);
    }
    for(int i = 0; i < sz; i++){
        int ch = z[i] + dis[i];
        if(ch > 122)
            cout << (char)((ch % 122) + 96);
        else cout << (char)(ch);
    }
    cout << '\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}