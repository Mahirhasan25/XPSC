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
    fast int n, x;
    while (cin >> n >> x)
    {
        int mx = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        int l = mx, r = INT_MAX;
        int ans = -1;
        while (l <= r)
        {
            int cap = l + (r - l) / 2;
            int cnt = 1;
            ll s = 0;
            for (int i = 0; i < n; i++)
            {
                if (s + a[i] <= cap)
                {
                    s += a[i];
                }
                else
                {
                    cnt++;
                    s = a[i];
                }
            }
            if (cnt <= x)
            {
                ans = cap;
                r = cap - 1;
            }
            else
            {
                l = cap + 1;
            }
        }
        print(ans);
    }
}