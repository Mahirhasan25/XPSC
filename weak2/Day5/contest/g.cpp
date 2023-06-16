/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    ll sum1 = 0, sum2 = 0;
    int i = 0, j = n - 1, cnt = 2;
    unordered_map<ll,ll> ans; ll mx = INT_MIN;

    if(v[i] == v[j])
    cout << "2" << '\n';
    else{
        sum1 += v[i]; sum2 += v[j];
        while(i < j){
            if(sum1 < sum2){
                i++;
                sum1 += v[i];
                cnt++;
            }else{
                j--;
                sum2 += v[j];
                cnt++;
            }
            if(sum1 == sum2){
                mx = max(mx, sum1);
                ans[mx] = cnt;
            }
        }
        if(sum1 == 0 and sum2 == 0) 
        cout << "0" << '\n';
        else
        cout << ans[mx] << '\n';
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}