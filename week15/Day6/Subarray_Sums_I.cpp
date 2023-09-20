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
    int n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for(auto &i : v)
        cin >> i;
    int i = 0, j = 0, cnt = 0;
    ll sum = 0;
    while(j < n)
    {
        sum += v[j];
        if(sum > x)
        {
            while(i < n && sum > x)
            {
                sum -= v[i];
                i++; 
            }
        }
        if(sum == x)
        {
            cnt++;
        }
        j++;
    }
    print(cnt);
}