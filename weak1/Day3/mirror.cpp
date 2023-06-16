#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ans(n + 1,vector<int>(m + 1));
    for(int i = 1; i <= n; i++){
        for(int j = m; j > 0; j--){
            cin >> ans[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
}