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
    int n, x;
    cin >> n >> x;
    string ans = "";
    if(x > 0){
        if(n + 1 < x){
            minus; return;
        }
        else{
            int cnt = 0, sum = 1;
            while(sum != x){
                ans += '+';
                sum += 1;
                cnt++;
            }
            for(int j = 0; j < n - cnt; j++) ans += '*';
        }
    }else{
        if(n - 1 < abs(x)){
            minus; return;
        }
        else{
            int cnt = 0, sum = 1;
            while(sum != x){
                ans += '-';
                sum -= 1;
                cnt++;
            }
            for(int j = 0; j < n - cnt; j++) ans += '*';
        }
    }
    for(int i = 0, j = n - 1; i < n/2; i++, j--){
        swap(ans[i], ans[j]);
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