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
#define rep(x, y) for (int i = x; i < y; i++)
#define all(x) (x).begin(), (x).end()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> v(n);
    vector<ll> vis(n+1LL);
    for(ll i = 0; i < n; i++)
        v[i] = i+1LL;
    ll cnt_x = 0, cnt_y = 0;
    for (ll i = 1; i <= n; i++)
    {
        // v[i-1] = i;
        if (i % x == 0LL && vis[i] == 0LL){
            cnt_x++;
            vis[i] = 1;
        }
        if (i % y == 0LL && vis[i] == 0LL)
            cnt_y++;
        else if(i % y == 0LL && vis[i] == 1LL)
            cnt_x--;
    }
    // sort(all(v), greater<ll>());
    // ll sum = 0;
    // for(ll i = 0; i < cnt_x; i++)
    //     sum += v[i];
    // sort(all(v));
    // for(ll i = 0; i < cnt_y; i++){
    //     sum -= v[i];
    // }
    // print(sum);
    print(cnt_x);
    print(cnt_y);
    // for (auto i : v)
    //     cout << i << ' ';
}
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}