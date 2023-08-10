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
    string s; cin >> s;
    vector<int> a(s.size()+1);
    for(int i = 0; i < s.size(); i++){
        a[i + 1] = s[i] - '0';
    }
    vector<int> b = a;
    for(int i = s.size(); i >= 0; i--){
        if(a[i] >= 5){
            while(a[i-1] >= 9) i--;
            a[i-1]++;
        }
    }
    for(int i = 0; i <= s.size(); i++){
        if(i == 0 && a[i] == 0) continue;
        if(a[i] != b[i]){
            cout << a[i];
            for(i += 1; i <= s.size(); i++)
                cout << 0;
        }else cout << a[i];
    }
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