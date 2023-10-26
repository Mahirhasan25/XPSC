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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int cnt1 = 0, cnt2 = 0;
    if (v[0] == v[n - 1])
    {
        for (int i = 0; i < n; i++)
        {
            int com = v[0];
            if (v[i] == com)
                cnt2++;
            if (cnt2 == k)
                break;
        }
    }
    else
    {
        int i;
        for (i = 0; i < n; i++)
        {
            int com = v[0];
            if (v[i] == com)
                cnt1++;
            if (cnt1 == k)
                break;
        }
        for (int j = n - 1; j > i; j--)
        {
            int com = v[n - 1];
            if (v[j] == com)
                cnt2++; 
            if(cnt2 == k)
                break;
        }
    }
    if(cnt2 == k) cyes;
    else cno;
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