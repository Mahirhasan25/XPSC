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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    deque<int> dq;
    bool now = false;
    string ans = "";
    dq.push_back(v[0]);
    ans += '1';

    for (int i = 1; i < n; i++)
    {
        if (dq.back() <= v[i] && !now)
        {
            ans += '1';
            dq.push_back(v[i]);
        }
        else
        {
            if (!now)
            {
                if (dq.front() >= v[i])
                {
                    ans += '1';
                    dq.push_back(v[i]);
                    now = true;
                }
                else
                    ans += '0';
            }
            else if (dq.front() >= v[i] && dq.back() <= v[i])
            {
                ans += '1';
                dq.push_back(v[i]);
            }
            else
                ans += '0';
        }
    }
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