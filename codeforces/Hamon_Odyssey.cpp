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
    int cnt = 0;
    int l = 0, r = 0;
    int sum = v[l];
    while(r < n)
    {
        if(sum != 0)
            sum &= v[r];
        if(sum == 0)
        {
            cnt++;
            r++;
            l = r;
            if(l < n)
                sum = v[l];
            continue;
        }
        r++;
    }
    if (sum != 0 && cnt == 0)
        print(1);
    else
        print(cnt);
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