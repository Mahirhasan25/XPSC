#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, r, temp = "EGYPT";
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if((i + 4) < s.size() and s[i] == 'E' and s[i+1] == 'G' and s[i+2] == 'Y' and s[i+3] == 'P' and s[i+4] == 'T'){
            r.push_back(' ');
            i += 4;
        }else{
            r.push_back(s[i]);
        }
    }
    cout << r;
}