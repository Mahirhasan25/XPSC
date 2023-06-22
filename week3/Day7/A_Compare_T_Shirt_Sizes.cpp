/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define pub push_back
#define pob pop_back
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
int fun(string s){
    if(s.back() == 'M') return 0;
    if(s.back() == 'L') return s.size();
    return -s.size(); 
}
void solve(){
    string a, b;
    cin >> a >> b;
    int x = fun(a);
    int y = fun(b);
    if(x > y) print(">");
    else if( x < y) print("<");
    else print("=");
    // string a , b;
    // cin >> a >> b;
    // int left_x = 0, right_x = 0;
    // for(int i = 0; i < a.size(); i++){
    //     if(a[i] == 'X') left_x++;
    // }
    // for(int i = 0; i < b.size(); i++){
    //     if(b[i] == 'X') right_x++;
    // }
    // int a_idx = a.size() - 1, b_idx = b.size() - 1;
    // if(a[a_idx] == 'L' and b[b_idx] == 'L'){
    //     if(left_x > right_x) print(">");
    //     else if(left_x < right_x) print("<");
    //     else print("=");
    // }
    // else if(a[a_idx] == 'S' and b[b_idx] == 'S'){
    //     if(left_x > right_x) print("<");
    //     else if(left_x < right_x) print(">");
    //     else print("=");
    // }
    // else if(a[a_idx] == 'L' and (b[b_idx] == 'M' or b[b_idx] == 'S')) print(">");
    // else if(a[a_idx] == 'S' and (b[b_idx] == 'M' or b[b_idx] == 'L')) print("<");
    // else if(a[a_idx] == 'M' and b[b_idx] == 'S') print(">");
    // else if(a[a_idx] == 'M' and b[b_idx] == 'L') print("<");
    // else print("=");
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}