/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<vector<char>> grid(2, vector<char>(n));
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            char ch;
            cin >> ch;
            if(ch == 'R')
               grid[i][j] = ch;
            else 
               grid[i][j] = 'G';
            }
    }
    bool ok = true;
    for(int i = 0; i < n; i++){
        if(grid[0][i] != grid[1][i]){
            ok = false;
        }
    }
    ok ? cout << "YES" << '\n': cout << "NO" << '\n';
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