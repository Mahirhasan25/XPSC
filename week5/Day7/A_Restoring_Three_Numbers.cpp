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
    vector<int> v(4);
    int mx = -1;
    for(int i = 0; i < 4; i++){
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    for(int i = 0; i < 4; i++){
        if(v[i] != mx){
            cout << abs(mx - v[i]) << ' ';
        }
    }
    cout << '\n';
}