/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> num(n);
    for (ll i = 0; i < n; i++)
        cin >> num[i];

    ll i = 0, j = 0, cnt = 0;
    multiset<ll> ml;
    vector<ll> tot;

    while (j < n)
    {

        ml.insert(num[j]);

        if (j - i + 1 < k)
            j++;
        else
        {
            ll mx = *ml.rbegin();
            if (mx <= q)
                cnt++;
            else
            {
                tot.push_back(cnt);
                cnt = 0;
            }
            auto it = ml.find(num[i]);
            ml.erase(it);
            i++, j++;
        }
    }
    tot.push_back(cnt);
    ll ans = 0;
    for (auto v : tot)
    {
        ans += ((v * (v + 1)) / 2);
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        // cout << t << '\n';
    }
}