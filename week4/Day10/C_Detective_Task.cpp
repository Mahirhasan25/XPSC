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
    int n; 
    string s; cin >> s;
    n = s.size();
    int one = 0, zero = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1') one = i + 1;
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            zero = i + 1;
            break;
        }
    }
    if(one == 0 and zero == 0)
        print(n);
    else if(one == 0)
        print(zero);
    else if(zero == 0)
        print((n - one) + 1);
    else print((zero - one) + 1);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}