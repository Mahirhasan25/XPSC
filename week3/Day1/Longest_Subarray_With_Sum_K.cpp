/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define pub push_back
#define pob pop_back
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);

int main(){
    fast
    int n, k; cin >> n >> k;
    vector<int> a(n);
    int i = 0, j = 0, ans = 0;
    long long int s = 0;
    while(j < n){
        s += a[j];
        if(s > k){
            while(s > k){
                s -= a[i];
                i++;
            }
        }
        if(s == k){
            ans = max(ans , j - i + 1);
        }
        j++;
    }
    cout << ans << '\n';
}