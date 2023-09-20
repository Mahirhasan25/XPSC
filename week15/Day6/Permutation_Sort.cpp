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
    bool ok = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            ok = true;
            break;
        }
    }
    if(ok)
    {
        if(v[0] == 1 || v[n - 1] == n)
        {
            print(1);
        }
        else if(v[0] == n && v[n - 1] == 1)
        {
            print(3);
        }
        else print(2);
    }
    else
    {
        print(0);
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