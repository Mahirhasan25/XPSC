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
    int n; cin >> n;
    vector<pair<int,int>> quality;
    for(int i = 1; i <= n; i++){
        int a, b;
        cin >> a >> b;
        if(a <= 10){ 
            quality.pub({b,i});
        }
    }
    bool flag = true;
    sort(all(quality), greater<pair<int,int>>());
    if(quality.size() == 1){
         print(quality[0].second);
         flag = false;
    }
    else{
        for(int i = 0; i < quality.size() - 1; i++){
            if(quality[i].first != quality[i+1].first)
            {
                print(quality[i].second);
                flag = false;
                return;
            }else{
                i++;             
            }
        }
    }
    if(flag) print(quality[quality.size() - 1].second);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}