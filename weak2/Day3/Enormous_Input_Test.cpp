/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
int k, sum = 0;
void solve(){
    int test;
    cin >> test;
    if(test % k == 0) sum++;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t >> k;
    while(t--){
        solve();
    }
    cout << sum;
}