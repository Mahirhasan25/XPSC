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
    vector<int> dis;
    int difference = m - 1;
    int j = 1;
    int diff = 1;
    for(int i = 1; i <= n; i++){
        cout << j << ' ';
        if(m - (j + diff) >= n - (i + 1)){
            j = j + diff; 
            diff++;
        }
        else
            j++;
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