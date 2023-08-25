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
    int n, m;
    cin >> n >> m;
    char ar[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ar[i][j];
        }
    }
    bool vs = false, is = false, ks = false , as = false;
    int vi = -1, ii = -1 , ki = -1, ai = -1;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(ar[j][i] == 'v' && !vs){
                vi = i;
                vs = true;
                break;
            }
            else if(ar[j][i] == 'i' && vi != -1 && !is){
                ii = i;
                is = true;
                break;
            }
            else if(ar[j][i] == 'k' && ii != -1 && !ks){
                ki = i;
                ks = true;
                break;
            }
            else if(ar[j][i] == 'a' && ki != -1 && !as){
                ai = i;
                as = true;
                break;
            }
        }
    }
    if(vi < ii && ii < ki && ki < ai) cyes;
    else cno;
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}