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
    int n; cin >> n;
    set<int> st;
    for(int i=0;i<n;i++){
        int in; cin >> in;
        st.insert(in);
    }
    if((n-st.size()) % 2 == 0){
        cout << st.size() << '\n';
    }else{
        cout << st.size()-1 << '\n';
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