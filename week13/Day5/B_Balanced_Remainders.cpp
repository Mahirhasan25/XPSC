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
    vector<int> v(3);
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        v[in % 3]++;
    }
    int x = n/3;
    int ans = 0;
    for(int i = 0; i < 2; i++){
        if(v[0] > x){
            ans += v[0] - x;
            v[1] += v[0] - x;
            v[0] = x;
        }
        if(v[1] > x){
            ans += v[1] - x;
            v[2] += v[1] - x;
            v[1] = x;
        }
        if(v[2] > x){
            ans += v[2] - x;
            v[0] += v[2] - x;
            v[2] = x;
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