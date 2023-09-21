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
    vector<int> v(n);
    for(auto &i : v) cin >> i;
    sort(all(v));
    vector<int> a, b;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            a.pub(v[i]);
        else 
            b.pub(v[i]);
    }
    sort(all(b), greater<int>());
    for(auto i : a) cout << i << ' ';
    for(auto i : b) cout << i << ' ';
}