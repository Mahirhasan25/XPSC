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
    ll n, k;
    cin >> n >> k;
    vector<ll> prime;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            prime.pub(i);
            if(i * i != n){
                prime.pub(n/i);
            }
        }
    }
    sort(all(prime));
    if(prime.size() < k) print(-1);
    else print(prime[k-1]);
}