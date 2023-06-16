/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    ll cnt = 0;
    while(n <= m){
        cnt++;
        n += n;
    }
    cout << cnt;
    
}