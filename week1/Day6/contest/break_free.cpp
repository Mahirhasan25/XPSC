#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    int od_cnt = 0, ev_cnt = 0;
    long long ans1, ans2, ans;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        if (in % 2 == 0)
            ev_cnt++;
        else
            od_cnt++;
    }
    ans1 = pow(2, ev_cnt);
    ans2 = pow(2, od_cnt) - 1;
    ans = (ans1 + ans2) % mod;
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}