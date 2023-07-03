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
    char c;
    cin >> n >> c;
    string s; cin >> s;
    s += s;
    int i;
    for(i = 0; i < s.size(); i++){
        if(s[i] == c) break;
    }
    int j = i, k = i;
    int ans = 0;
    while(k < s.size()){
        if(s[k] == 'g'){
            ans = max(ans, k - j);
            k++;
            while(s[k] != c and k < s.size()){
                k++;
            }
            j = k;
            k--;
        }
        k++;
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