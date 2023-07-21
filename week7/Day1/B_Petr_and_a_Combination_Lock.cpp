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

int main(){
    fast
    int n; cin >> n;
    vector<int> v(n);
    bool flag = false;
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < (1 << n); i++)
    {
        int ans = 0;
        for(int j = 0; j < n; j++)
        {
            if((i & (1 << j)) != 0) ans += v[j];
            else ans -= v[j];
        }
        if(ans % 360 == 0)
        {
            flag = true;
            break;
        }
    }
    if(flag) cyes;
    else cno;
}