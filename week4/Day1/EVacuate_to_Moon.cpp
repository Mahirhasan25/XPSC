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
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);

void solve(){
    int a, b, h; 
    cin >> a >> b >> h;
    vector<int> A(a), B(b);

    for(int i = 0; i < a; i++){
        cin >> A[i];
    }
    for(int i = 0; i < b; i++){
        cin >> B[i];
    }

    sort(all(A), greater<ll>());
    sort(all(B), greater<ll>());

    ll ans = 0;
    for(int i = 0; i < a and i < b; i++){
        if(B[i] * h > A[i])
            ans += A[i];
        else
            ans += B[i]*h;
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