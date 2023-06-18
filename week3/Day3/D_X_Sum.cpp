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
    int n, m;
    cin >> n >> m;
    int grid[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ll sum = 0;
            for(int k = 1; k < max(n, m); k++){
                if(n > i + k and m > j + k)
                    sum += grid[i+k][j+k];
                if(0 <= i - k and  0 <= j - k)
                   sum += grid[i-k][j-k];
                if(n > i + k and 0 <= j - k)
                   sum += grid[i+k][j-k];
                if(0 <= i - k and m > j + k)
                   sum += grid[i-k][j+k];
            }
            sum += grid[i][j];
            ans = max(ans, sum);
        }
    }
    print(ans);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}