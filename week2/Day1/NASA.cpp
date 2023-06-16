/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> palindrome; 
bool is_palindrome(ll n){
    string s1 = to_string(n);
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    return s1 == s2;
}
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    unordered_map<ll,ll>freq;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]]++;
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        for(auto v : palindrome){
            ll k = a[i] ^ v;
            if(k > (1<<15)) continue;
            ans += freq[k];
        }
    }
    cout << (ans+n)/2 << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; 
    cin >> t;
    for(ll i = 0; i < (1<<15); i++){
        if(is_palindrome(i)) palindrome.push_back(i);
    }
    while(t--){
        solve();
    }
}