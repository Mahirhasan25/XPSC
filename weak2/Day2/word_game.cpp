#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<vector<string>> row(3,vector<string>(n));
    map<string,int> freq;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            cin >> row[i][j];
            freq[row[i][j]]++;
        }
    }
    int x = 0, y = 0, z = 0;
    for(int i = 0; i < n ; i++){
        if(freq[row[0][i]] == 1)
            x += 3;
        else if(freq[row[0][i]] == 2)
            x++;
        if(freq[row[1][i]] == 1)
            y += 3;
        else if(freq[row[1][i]] == 2)
            y++;
        if(freq[row[2][i]] == 1)
            z += 3;
        else if(freq[row[2][i]] == 2)
            z++;
    }
    cout << x << ' ' << y << ' ' << z << '\n';
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}