/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int sum1 = 0, sum2 = 0;
    for(int i = 0, j = s.size() - 1; i < 3; i++, j--){
        sum1 += s[i] - '0';
        sum2 += s[j] - '0';
    }
    if(sum1 == sum2)
       cout << "YES" << '\n';
    else
       cout << "NO" << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}