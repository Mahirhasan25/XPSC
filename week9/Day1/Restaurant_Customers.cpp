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
#define pub push_back
#define pob pop_back
#define rep(x, y) for(int i = x; i < y; i++)
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

int main(){
    fast
    int q;
    cin >> q;
    map<int,ll> pre;
    while(q--){
        int i , j;
        cin >> i >> j;
        pre[i]++; pre[j+1]--;
    }
    ll sum = 0 , ans = 0;
    for(auto i : pre){
        sum += i.second;
        ans = max(ans, sum);
    }
    print(ans);  
}