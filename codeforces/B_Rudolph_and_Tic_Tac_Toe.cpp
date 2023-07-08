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
    char grid[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> grid[i][j];
        }
    }
    char ans = '#';
    if(grid[0][0] == grid[0][1] and grid[0][1] == grid[0][2])
    {
        if(grid[0][0] != '.')
        ans = grid[0][0];
    }
    if(grid[0][0] == grid[1][0] and grid[1][0]== grid[2][0])
    {
        if(grid[0][0] != '.')
        ans = grid[0][0];
    }
    if(grid[2][0] == grid[2][1] and grid[2][1] == grid[2][2])
    {
        if(grid[2][0] != '.')
        ans = grid[2][0];
    }
    if(grid[0][2] == grid[1][2] and grid[1][2]== grid[2][2])
    {
        if(grid[0][2] != '.')
        ans = grid[0][2];
    }
    if(grid[0][0] == grid[1][1] and grid[1][1]== grid[2][2])
    {
        if(grid[0][0] != '.')
        ans = grid[0][0];
    }
    if(grid[0][2] == grid[1][1] and grid[1][1] == grid[2][0])
    {
        if(grid[0][2] != '.')
        ans = grid[0][2];
    }
    if(grid[1][0] == grid[1][1] and grid[1][1]== grid[1][2])
    {
        if(grid[1][0] != '.')
        ans = grid[1][0];
    }
    if(grid[0][1] == grid[1][1] and (grid[1][1] == grid[2][1]))
    {
        if(grid[0][1] != '.')
        ans = grid[0][1];
    }
    if(ans == '#')
    print("DRAW");
    else print(ans);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}