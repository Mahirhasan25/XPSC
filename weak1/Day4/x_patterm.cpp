#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char grid[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            grid[i][j] = '*';
        }
    }
    for(int i = 1; i <= n; i++){
        grid[i][i] = '\\';      
    }
    for(int i = 1; i <= n; i++){
            grid[i][(n+1)-i] = '/';
    }
    grid[(n+1)/2][(n+1)/2] = 'X';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << grid[i][j];
        }
        cout << '\n';
    }
}