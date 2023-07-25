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
    string s; cin >> s;
    int ans = 0; 
    for(int i = 0; i < n; i +=2){
        if(s[i] == 'a' && s[i + 1] == 'a'){
            s[i+1] = 'b'; ans++;
        }else if(s[i] == 'b' && s[i+1] == 'b'){
            s[i] = 'a'; ans++;
        }
    }
    print(ans);
    print(s);
}
int main(){
    fast
    int t = 1; 
    // cin >> t;
    while(t--){
        solve();
    }
}