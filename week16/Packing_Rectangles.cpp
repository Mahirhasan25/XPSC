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
#define rep(x, y) for(int i = x; i < y; i++)
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;
ll w, h, n;
bool is_valid(ll x)
{
    return (x/w) * (x/h) >= n;
}
int main(){
    fast
    cin >> w >> h >> n;
    ll l = 0, r = 1;
    ll ans = -1;
    while(is_valid(r) == false)
        r *= 2;
    while(l <= r)
    {
        ll mid = l + (r - l)/2;
        if(is_valid(mid))
        {
            r = mid - 1;
            ans = mid;
        }
        else 
        {
            l = mid + 1;
        }
    }
    print(ans);
}