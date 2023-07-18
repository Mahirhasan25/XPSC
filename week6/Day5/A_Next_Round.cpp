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
    int n, k; cin >> n >> k;
    int score;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(i == k) score = a[i];
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(score <= a[i] && a[i] != 0) cnt++;
    }
    print(cnt);
}