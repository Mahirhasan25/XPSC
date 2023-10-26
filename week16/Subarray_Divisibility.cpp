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
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    map<ll, ll> cnt;
    cnt[0]++;
    ll sum = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        sum += v[i];
        ans += cnt[((sum % n) + n) % n];
        cnt[((sum % n) + n) % n]++;
    }
    print(ans);
}