/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
int cnt(string s, int c){
    if(s.size() == 1) return c;
    c += 1;
    long long int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }
    string s1 = to_string(sum);
    return cnt(s1, c);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c = 0;
    string s;
    cin >> s;
    cout << cnt(s, c);
}