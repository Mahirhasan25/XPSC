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
    ll n; cin >> n;
    ll ar[n];
    ll mn = INT_MAX;
    for(auto &i : ar) cin >> i;
    for(int i = 1; i < (1 << n); i++){
        ll sum1 = 0, sum2 = 0;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                sum1 += ar[j];
            }else{
                sum2 += ar[j];
            }
        }
        mn = min(mn, abs(sum1 - sum2));
    }
    print(mn);
}