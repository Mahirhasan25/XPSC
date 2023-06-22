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

void solve(){
    int n, q; cin >> n >> q;
    int ev_cnt = 0, od_cnt = 0;
    ll sum = 0;

    for(int i = 0; i < n; i++){
        int in; cin >> in;
        if(in % 2 == 0){
            ev_cnt++;
            sum += in;
        }else{
            od_cnt++;
            sum += in;
        }
    }
    // print(ev_cnt);print(od_cnt);print(sum);
    while(q--){
        int typ, val; cin >> typ >> val;
        if(typ == 0){
            sum += (ev_cnt * val);
            print(sum);
            if(val % 2 != 0){
                od_cnt += ev_cnt;
                ev_cnt = 0;
            }
        }else{
            sum += (od_cnt * val);
            print(sum);
            if(val % 2 != 0){
                ev_cnt += od_cnt;
                od_cnt = 0;
            }
        }
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