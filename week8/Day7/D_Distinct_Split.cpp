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
    string s;
    cin >> s;
    unordered_map<char, int> f_b;
    for(int i = 0; i < n; i++)
        f_b[s[i]]++;
    set<char> f_a;
    int ans = 0;
    for(int i = 0; i < n; i++){
        f_a.insert(s[i]);
        f_b[s[i]]--;
        if(f_b[s[i]] == 0)
            f_b.erase(s[i]);
        int x = (f_a.size() + f_b.size()); 
        ans = max(ans, x);
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