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
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES" << '\n';
        cout << n << '\n';
        for (int i = 0; i < n; i++)
            cout << 1 << ' ';
        cout << '\n';
    }
    else
    {
        if (k >= 2 && n % 2 == 0)
        {
            cout << "YES" << '\n';
            cout << n / 2 << '\n';
            for (int i = 0; i < n / 2; i++)
                cout << 2 << ' ';
            cout << '\n';
        }
        else if (k >= 3)
        {
            cout << "YES" << '\n';
            cout << n / 2 << '\n';
            cout << 3 << ' ';
            for (int i = 1; i < n / 2; i++)
                cout << 2 << ' ';
            cout << '\n';
        }
        else
            cout << "NO" << '\n';
    }
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