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
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<int,int> a, A;
    for(int i = 0; i < n; i++){
        if(s[i] >= 'a' and s[i] <= 'z')
            a[s[i] - 'a']++;
        else
            A[s[i] - 'A']++;
    }
    int x = min(a.size(), A.size());
    ll sum = 0, ans = 0;
    for(int i = 0; i < 26; i++){
        int mn = min(a[i], A[i]);
         ans += mn;
        int mx = max(a[i], A[i]);
        if((mx - mn) % 2 == 0) sum += mx - mn;
        else sum += (mx - mn) - 1;
    }
    for(int i = 1; i <= k and (sum - 2) >= 0; i++){
        ans++;
        sum -= 2;
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