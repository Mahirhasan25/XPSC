/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define pub push_back
#define pob pop_back
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);

void solve(){
    char grid[9][9];int hash_cnt1 = 0;
    for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 8; j++){
            cin >> grid[i][j];
            if(grid[i][j] == '#') hash_cnt1++;
        }
    }
    bool ok = false;
    for(int i = 1; i <= 8; i++){
        if(ok) break;
        for(int j = 1; j <= 8; j++){
            int hash_cnt2 = 0;

            for(int k = 1; k <= 8; k++){
                if(1 <= i-k and 1 <= j-k){
                    if(grid[i - k][j - k] == '#'){
                        hash_cnt2++;
                    }
                }
                if(8 >= i+k and 8 >= j+k){
                    if(grid[i + k][j + k] == '#'){
                        hash_cnt2++;
                    }
                }
                if(1 <= i-k and 8 >= j+k){
                    if(grid[i - k][j + k] == '#'){
                        hash_cnt2++;
                    }
                }
                if(8 >= i+k and 1 <= j-k){

                    if(grid[i + k][j - k] == '#'){
                        hash_cnt2++;
                    }
                }
            }
            if(hash_cnt1 == hash_cnt2 + 1){
                cout << i << ' ' << j << '\n';
                ok = true;
                break;
            }
        }
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