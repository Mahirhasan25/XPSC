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

// void solve(){
//     int n; cin >> n;
//     vector<int> a(n), pre(n);
//     for(auto &i : a) cin >> i;
//     sort(all(a), greater<int>());
//     pre[0] = a[0];
//     for(int i = 1; i < n; i++)
//         pre[i] = pre[i - 1] + a[i];
//     bool flag = true;
//     for(int i = 0; i < n; i++){
//         if(pre[i] == 0){
//             flag = false;
//             break;
//         }
//     }
//     if(flag){
//         cyes;
//         for(auto i : a) cout << i << ' ';
//         cout << '\n'; return;
//     }
//     else{
//         pre.clear();
//         sort(all(a));
//         pre[0] = a[0];
//         for(int i = 1; i < n; i++)
//             pre[i] = pre[i - 1] + a[i];
//         bool flag1 = true;
//         for(int i = 0; i < n; i++){
//             if(pre[i] == 0){
//                 flag1 = false;
//                 break;
//             }
//         }
//         if(flag1){
//             cyes;
//             for(auto i : a) cout << i << ' ';
//             cout << '\n'; return;
//         }
//     }
//     cno;
// }
void solve(){
    int n; cin >> n;
    int a[n];
    for(auto &i : a) cin >> i;
    int sum = accumulate(a, a+n, 0);
    if(sum == 0) cno;
    else{
        if(sum < 0) sort(a, a+n);
        else sort(a, a+n, greater<int>());
        cyes;
        for(auto i : a) cout << i << ' ';
        cout << '\n';
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