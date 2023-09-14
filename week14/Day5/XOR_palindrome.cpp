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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    ll mis = 0, gp = 0;
    ll l = 0, r = n - 1;
    while (l < r)
    {
        if (s[l] == s[r])
            gp += 2;
        else
            mis++;
        l++, r--;
    }
    for (ll i = 0; i <= n; i++)
    {
        ll tot = i;
        tot -= mis;
        if(tot < 0LL){
            ans.pub('0');
            continue;
        }
        tot = max((tot % 2LL), tot - gp);
        tot = max(0LL,tot - (n % 2LL));
        if(tot == 0)
            ans.pub('1');
        else 
            ans.pub('0');
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