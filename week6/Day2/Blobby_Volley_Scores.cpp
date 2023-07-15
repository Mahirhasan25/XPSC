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
    bool server_a = false;
    bool server_b = false;
    bool reciver_a = false;
    bool reciver_b = false;
    int a_cnt = 0, b_cnt = 0;
    if(s[0] == 'A'){
        a_cnt++;
        server_a = true;
    }else{
        server_b = true;
    }
    for(int i = 1; i < s.size(); i++){
        char ch = s[i];
        if(ch == 'A'){
            if(server_a)
                a_cnt++;
            else{
                server_a = true;
                server_b = false;
            }
        }else{
            if(server_b)
                b_cnt++;
            else{
                server_b = true;
                server_a = false;
            }
        }
    }
    cout << a_cnt << ' ' << b_cnt << '\n';
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}