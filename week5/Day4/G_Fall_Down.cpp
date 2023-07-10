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
int n, m;
char grid[55][55];
void dfs(int i, int j){
    bool ok = true;
    if(grid[i + 1][j] != '*' and grid[i + 1][j] != 'o' and i < n){
        ok = false;
        grid[i][j] = '.';
        dfs(i+1,j);
    }
    if(ok)
        grid[i][j] = '*';
}
void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> grid[i][j];
        }
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= m; j++){
            if(grid[i][j] == '*')
            dfs(i, j);
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
           cout << grid[i][j];
        }
        cout << '\n';
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