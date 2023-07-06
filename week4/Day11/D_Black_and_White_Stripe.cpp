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
#define rep(x, y) for(int i = x; i < y; i++)
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int i = 0, j = 0, cnt = 0, mn = 0;
    map<char, int> freq;
    while(j < n){
        if(j < k){
            if(s[j] == 'W'){
                freq[s[j]]++;
            }
            if(j == k - 1)
                mn = freq['W'];
            j++;
        }else{
            mn = min(mn, freq['W']);

            if(s[j] == 'W')
                freq[s[j]]++;
            j++;

            if(s[i] == 'W')
                freq[s[i]]--;
            i++;
        }
    }
    mn = min(mn, freq['W']);
    print(mn);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}