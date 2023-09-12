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
    ll n, d;
    cin >> n >> d;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    sort(all(a), greater<ll>());
    int team = 0; int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        ll tm = a[i];
        if (tm > d)
        {
            team++;
        }
        else
        {
            while (tm <= d && i < j)
            {
                tm += a[i];
                j--;
            }
            if(tm > d)
                team++;
        }
    }
    print(team);
    // afdfdf
}
int main()
{
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}