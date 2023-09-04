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
    int grid[2][n];
    int h = 2*n;
    int l = 1;
    grid[0][0] = h--;
    grid[1][n - 1] = h--;
    for(int i = 0; i < n-1; i++){
        if(i & 1){
            grid[0][i+1] = h--;
            grid[1][i] = h--;
        }else{
            grid[1][i] = l++;
            grid[0][i+1] = l++;
        }
    } 
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
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