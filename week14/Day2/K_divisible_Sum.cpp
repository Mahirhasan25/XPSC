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
    int n, k;
    cin >> n >> k;
    if(n == 1){
        print(k);
        return;
    }
    if(n == k){
        print(1);
        return;
    }
    if(n < k){
        int a = k/n;
        int d = k%n;
        if(d != 0) a++;
        print(a);
    }else{
        int c = n/k;
        int b = n%k;
        if(b != 0)
            c++;
        k *= c;
        int a = k/n;
        int d = k%n;
        if(d != 0) a++;
        print(a);
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