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
int n;
const int N = 1e5 + 5;
int v[N];
int Upper_b(int x)
{
    int idx = -1;
    int l = 0;
    int r = n - 1;
    while(l <= r)
    {
        int mid = l + (r - l)/2;
        if(v[mid] >= x)
        {
            idx = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return idx;
}
int Lower_b(int x)
{
    int idx = -1;
    int l = 0;
    int r = n - 1;
    while(l <= r)
    {
        int mid = l + (r - l)/2;
        if(v[mid] <= x)
        {
            idx = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return idx;
}
int main(){
    fast
    cin >> n;
    for(int i = 0; i < n; i++)
       cin >> v[i];
    sort(v, v+n);
    int k;
    cin >> k;
    while(k--)
    {
        int l, r, f_idx = -1, l_idx = -1;
        cin >> l >> r;
        f_idx = Upper_b(l);
        // cout << f_idx << ' ';
        l_idx = Lower_b(r);
        // cout << l_idx << ' ';
        if((f_idx == 0 && l_idx == -1) || (f_idx == -1 && l_idx == n - 1))
            cout << 0 << ' ';
        else cout << l_idx - f_idx + 1 << ' ';
    }
}
