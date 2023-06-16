/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'

void solve(){
    int n;
    cin >> n;
    int cnt1 = 0, mx1 = 0;
    for(int i=0;i<n;i++){
        int in;
        cin >> in;
        if(in == 0){
            mx1 = max(mx1, cnt1);
            cnt1 = 0;
            continue;
        }
        cnt1++;
    }
    mx1 = max(mx1, cnt1);

    int cnt2 = 0, mx2 = 0;
    for(int i=0;i<n;i++){
        int in;
        cin >> in;
        if(in == 0){
            mx2 = max(mx2, cnt2);
            cnt2 = 0;
            continue;
        }
        cnt2++;
    }
    mx2 = max(mx2, cnt2);

    if(mx1 > mx2){
        cout << "Om" << '\n';
    }else if(mx1 < mx2){
        cout << "Addy" << '\n';
    }else{
        cout << "Draw" << '\n';
    } 
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