#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s = to_string(n);
    reverse(s.begin(), s.end());
    while(s.size() < 4){
        s += '0';
    }
    reverse(s.begin(), s.end());
    cout << s;
}