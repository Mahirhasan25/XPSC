/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int rating;
    cin >> rating;
    if(1900 <= rating){
        cout << "Division 1" << '\n';
    }
    else if(1600 <= rating and rating <= 1899){
        cout << "Division 2" << '\n';
    }
    else if(1400 <= rating and rating <= 1599){
        cout << "Division 3" << '\n';
    }
    else if(rating <= 1399){
        cout << "Division 4" << '\n';
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