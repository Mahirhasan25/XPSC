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

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
void solve(){
    int n; cin >> n;
    vector<ll>a, b;
    bool flag = true;
    for(int i = 0; i < n; i++){
        ll in; cin >> in;
        if(flag){
            a.pub(in);
            flag = false;
        }else{
            b.pub(in);
            flag = true;
        }
    }
    if(a.size() == 1 and b.size() == 1){
        if(a[0] == b[0]){
            print('0');
            return;
        }else{
            cout << max(a[0], b[0]) << '\n';
            return;
        }
    }
    ll red = a[0], blue = b[0];
    for(int i = 1; i < a.size(); i++){
        red = gcd(red, a[i]);
    }
    for(int i = 1; i < b.size(); i++){
        blue = gcd(blue, b[i]);
    }

    bool flag1 = false, ok1 = true, ok2 = true;
    for(int i = 0; i < a.size(); i++){
        if(a[i] % blue == 0){
            flag1 = true;
            ok1 = false;
            break;
        }
    }
    if(flag1){
        for(int i = 0; i < b.size(); i ++){
            if(b[i] % red == 0){
                ok2 = false;
                break;
            }
        }        
    }
    if(ok1)
        print(blue);
    else if(ok2)
        print(red);
    else print('0');
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}