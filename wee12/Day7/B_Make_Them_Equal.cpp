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
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        s.insert(in);
    }
    if (n == 1)
    {
        print(0);
    }
    else if (s.size() == 2 && n >= 2)
    {
        auto it = s.begin();
        int a = *it; it++;
        int b = *it;
        if ((abs(a - b) & 1))
            print(abs(a - b));
        else
            print(abs(a - b) / 2);
    }
    else if (s.size() == 3)
    {
        auto it = s.begin();
        int a = *it; it++; 
        int b = *it; it++;
        int c = *it;
        if (abs(a - b) == abs(b - c))
            print(abs(a - b));
        else
            print(-1);
    }
    else
        print(-1);
}
int main()
{
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}