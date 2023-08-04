/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;
template<typename T> using ordered_set = tree<T, null_type, less_equal<T>,rb_tree_tag,
tree_order_statistics_node_update>;
void solve(){
    ll n; cin >> n;
    ll ans = 0;
    ordered_set<ll> s;
    for(ll i = 0; i < n; i++){
        int in; cin >> in;
        if(i == 0) s.insert(in);
        else{
            ans += (s.size() - (s.order_of_key(in)));
            s.insert(in);
        }
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