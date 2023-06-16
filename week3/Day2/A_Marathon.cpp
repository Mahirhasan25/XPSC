/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'

void solve(){
    int grid[4];
    for(int i = 0; i < 4; i++){
        cin >> grid[i];
    }
    int taimur_dis = grid[0], cnt = 0;
    for(int i = 1; i < 4; i++){
        if(taimur_dis < grid[i]) cnt++;
    }
    cout << cnt << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}