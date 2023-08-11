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
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        auto it1 = lower_bound(all(a),x);
        auto it2 = upper_bound(all(a),x);
        int idx1 = it1 - a.begin();
        int idx2 = it2 - a.begin();
        if(idx1 == 0) cout << "X ";
        else cout << a[idx1- 1] << ' ';
        if(idx2 == n) cout << "X" << '\n';
        else cout << a[idx2] << '\n';
    }
}