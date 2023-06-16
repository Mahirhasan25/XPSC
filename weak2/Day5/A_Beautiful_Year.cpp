/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
bool is_distinct(int n){
    int freq[10] = {0};
    string s = to_string(n);
    for(int i = 0; i < s.size(); i++){
        freq[s[i] - '0']++;
    }
    //for(int i = 0; i < 10; i++) cout << i << ' ' << freq[s[i]] << '\n';
    for(int i = 0; i < s.size(); i++){
        if(freq[s[i] - '0'] > 1) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = n + 1; i <= 18000; i++){
        if(is_distinct(i)){
            cout << i;
            return 0;
        }
    }
}