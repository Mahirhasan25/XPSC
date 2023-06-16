/**
* author: mj_riffu
* created: 2023-06-09 21:46:07
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v(n);
    for (ll i = 0;i < n;i++)
        cin >> v[i];
 
    ll i = 0, j = 0;
    multiset<ll> ml;
    ll ans = 0, cnt = 0;
    vector<ll> tot;
 
    while (j < n)
    {
        ml.insert(v[j]);
        if (j - i + 1 < k)
            j++;
        else
        {
            ll maxi = *ml.rbegin();
            if (maxi <= q)
                cnt++;
            else
            {
 
                tot.push_back(cnt);
                cnt = 0;
            }
            auto it = ml.find(v[i]);
            ml.erase(it);
            i++, j++;
        }
    }
 
    tot.push_back(cnt);
    for (auto val : tot)
        ans += ((val * (val + 1)) / 2);
    cout << ans << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}