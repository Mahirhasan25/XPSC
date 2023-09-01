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
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int i = 0, j = 0;
    int mn = INT_MAX;
    unordered_map<int, int> cnt;
    while(j < n){
        cnt[v[j]]++;
        if(j - i + 1 < d) j++;
        else{
            mn = min(mn, (int)cnt.size());
            // cout << i << ' ' << j << '\n';
            cnt[v[i]]--;
            if(cnt[v[i]] == 0) 
                cnt.erase(v[i]);
            i++;
            j++;
        }
    }
    print(mn);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}