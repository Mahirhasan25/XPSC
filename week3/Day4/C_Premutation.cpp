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
    int n; cin >> n;
    int arr[n][n-1];
    vector<int> first_v;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            cin >> arr[i][j];
            if(j == 0) first_v.pub(arr[i][0]);
        }
    }
    int first_el = 0;
    sort(first_v.begin(), first_v.end());
    for(int i = 0; i < n - 1; i++){
        if(first_v[i] == first_v[i+1])
            first_el = first_v[i];
    }
    int idx = -1;
    for(int i = 0; i < n; i++){
        if(arr[i][0] != first_el) idx = i;
    }
    cout << first_el << ' ';
    for(int i = 0; i < n - 1; i++){
        cout << arr[idx][i] << ' ';
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