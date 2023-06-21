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
    vector<ll> odd, even;
    ll n; cin >> n;
    for(int i = 0; i < n; i++){
        ll in; cin >> in;
        if(in % 2 ==0){
            even.pub(in);
        }else{
            odd.pub(in);
        }
    }
    if(even.size() == n or odd.size() == n){
        print("YES"); return;
    }
    sort(even.begin(), even.end());  
    sort(odd.begin(), odd.end());
    if(even[0] < odd[0]) cout << "NO" << '\n';
    else cout << "YES" << '\n'; 

}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}