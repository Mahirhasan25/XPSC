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
const int N = 3000 + 5;
int d1[N][N];
int d2[N][N];
int cur[N][N];
vector<string> s;
void solve()
{
    int n;
    cin >> n;
    s.clear();
    s.resize(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            d1[i][j] = 0;
            d2[i][j] = 0;
            cur[i][j] = 0;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cur[i][j] = (j - 1 >= 0 ? cur[i][j - 1] : 0) + d1[i][j] + d2[i][j];
        }
        for (int j = 0; j < n; j++)
        {
            char ch = s[i][j];
            if (cur[i][j] % 2)
            {
                ch = ((ch - '0') ^ 1) + '0';
            }
            if (ch == '1')
            {
                ans++;
                d1[i][j]++;
                if (j + 1 < n)
                    d2[i][j + 1]--;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (i + 1 >= n)
                break;
            if (j - 1 >= 0)
                d1[i + 1][j - 1] += d1[i][j];
            else
                d1[i + 1][j] += d1[i][j];
            if (j + 1 < n)
                d2[i + 1][j + 1] += d2[i][j];
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