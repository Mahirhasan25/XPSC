#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int freq[26] = {0};
    for(int i = 0; i < n; i++){
        char ch;
        cin >> ch;
        freq[ch - 'A']++;
    }
    int cnt = 0;
    for(int i = 0; i < 26; i++){
        if(freq[i] > 0) cnt++;
    }
    cout << n + cnt << '\n';
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