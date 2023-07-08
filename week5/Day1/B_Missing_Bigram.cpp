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
    vector<string> s;
    for(int i = 0; i < (n-2); i++){
        string in; cin >> in;
        s.pub(in);
    }
    string tm = "";
    bool flag = true;
    for(int i = 0; i < (n-2) - 1; i++){
        
        if(s[i][1] != s[i+1][0]){
            tm += s[i][1];
            tm += s[i+1][0];
            s.insert(s.begin()+(i+1),tm);    
            flag = false;
            break; 
        }
    }

    cout << s[0];
    for(int i = 1; i < s.size(); i++){
        cout << s[i][1];
    }
    if(flag)
        cout << 'a';
    cout << '\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}