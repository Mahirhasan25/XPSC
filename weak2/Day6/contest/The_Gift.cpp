/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, m;
    cin >> x >> n >> m;
    if(n-x <= m) cyes;
    else cno;
}