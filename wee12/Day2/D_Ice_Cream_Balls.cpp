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
ll min_ball(ll x)
{
    return (x * (x - 1LL)) / 2LL;
}
void solve()
{
    ll target;
    cin >> target;
    ll l = 1, r = 1e10;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (min_ball(mid) <= target)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    ans += target - (ans * (ans - 1LL)) / 2LL;
    print(ans);
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