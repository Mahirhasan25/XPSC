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
    if(n % 2 == 0) {
        print('0');
        return;
    }
    else{
        vector<int> v;
        while(n != 0){
            v.pub(n % 10);
            n /= 10;
        }
        if(v[v.size() - 1] % 2 == 0){
            print('1');
            return;
        }
        for(int i = 0; i < v.size(); i++){
            if(v[i] % 2 == 0){
                print('2');
                return;
            }
        }
    }
    print("-1");
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}