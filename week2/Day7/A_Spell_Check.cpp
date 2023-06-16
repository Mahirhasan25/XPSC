/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
string name = "Timur";
unordered_map<int,int> freq1(59), freq2(59);
void solve(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0; i < n; i++){
        freq2[s[i] - 'A']++;
    }
    bool ok = true;
    for(int i = 0; i < 59; i++){
        if(freq1[i] != freq2[i]){
            ok = false; break;
        }
    }
    if(ok) cyes; else cno;
    freq2.clear();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 0; i < 5; i++){
        freq1[name[i] - 'A']++;
    }
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}