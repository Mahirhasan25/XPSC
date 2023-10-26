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
    ll n, k, x;
    cin >> n >> k >> x;
    ll min = (k * (k + 1LL)) / 2LL;
    ll mx = (n * (n + 1LL)) / 2LL - ((n - k) * (n - k + 1LL)) / 2LL;
    if (k <= n && min <= x &&  mx >= x)
        cyes;
    else
        cno;
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