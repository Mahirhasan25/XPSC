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
    int mx = INT_MIN;
    int val = 0;
    unordered_map<int, int> occ;
    for (auto &i : v)
    {
        cin >> i;
        occ[i]++;
        if (mx < occ[i])
        {
            val = i;
            mx = occ[i];
        }
    }
    if (n == 1)
    {
        print(-1);
        return;
    }
    // int cnt = 0;
    // unordered_map<int, bool> vis;
    // for (auto i : v)
    // {
    //     if (vis[i] == false)
    //     {
    //         if (occ[i] == mx)
    //             cnt++;
    //         vis[i] = true;
    //     }
    // }
    // if (cnt >= 2)
    // {
    //     print(-1);
    //     return;
    // }
    int l = 0, r = 0;
    bool flag = false;
    int mn_sb_arr = INT_MAX;
    while (r < n)
    {
        if (v[l] != val && l < n)
        {
            l++;
        }
        else if (v[l] == val && !flag && l < n)
        {
            r = l;
            r++;
            flag = true;
        }
        if (v[l] == val && v[r] == val && r < n && l < n)
        {
            mn_sb_arr = min(mn_sb_arr, r - l + 1);
            l = r;
            flag = false;
        }
        else if (flag)
            r++;
    }
    if(mn_sb_arr == INT_MAX) print(-1);
    else print(mn_sb_arr);
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