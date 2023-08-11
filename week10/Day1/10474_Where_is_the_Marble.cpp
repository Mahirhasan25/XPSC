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
    fast int n, q;
    int cs = 1;

    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
            break;
        cout << "CASE# " << cs << ":" << '\n';
        cs++;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(all(a));
        while (q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(all(a), x);
            int idx = it - a.begin();
            int ans = -1;
            if (idx == n)
                ans = -1;
            else if (a[idx] != x)
                ans = -1;
            else
                ans = idx + 1;
            if (ans == -1)
                cout << x << " not found " << '\n';
            else
                cout << x << " found at " << ans << '\n';
        }
    }
}