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
    if(n & 1) print(n/2 + 1);
    else print(n/2); 
    string s = "BAN";
    for(int i = 1; i < n; i++)
        s += "BAN";
    int i = 0, j = n*3 - 1;
    while(i < j){
        if(s[i] == 'B'){
            while(i < j){
                if(s[j] == 'N'){
                    cout << i + 1 << ' ' << j + 1 << '\n';
                    j--; break;
                }            
                j--;
            }
        }
        i++;
    }
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}