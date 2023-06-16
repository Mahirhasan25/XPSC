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
    string  s1, s2;
    cin >> s1;
    cin >> s2;
    int cnt = 0;
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] != s2[i]) cnt++;
    }
    cout << cnt;
}