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
    vector<int> a(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        int pls = 0;
        if(a[i] < 0){
            pls = -1 * a[i];
            sum += pls;
            continue;
        }
        sum += a[i];
    }
    // cout << sum;
    int cnt = 0;bool flag = true;
    for(int i = 0; i < n; i++){
        if(a[i] < 0 and flag == true){
            cnt++;
            flag = false;
        }else if(a[i] > 0)
            flag = true;
    }
    cout << sum << ' ' << cnt <<'\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}