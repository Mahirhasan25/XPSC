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
#define rep(x, y) for (int i = x; i < y; i++)
#define all(x) (x).begin(), (x).end()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    fast
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    ll l = 0, r = 1e18;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2LL;
        ll tm = 0;
        for (ll i = 0; i < n; i++)
        {
            tm += (mid / a[i]);
            if(tm >= t){
                break;
            }
        }
        if (tm >= t)
        {
            ans = mid;
            r = mid - 1LL;
        }
        else
        {
            l = mid + 1LL;
        }
    }
    print(ans);
}