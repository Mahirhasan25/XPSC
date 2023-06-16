#include<bits/stdc++.h>
using namespace std;
string reverse_s(string s){
    for(int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--){
        char ch = s[i];
        s[i] = s[j];
        s[j] = ch; 
    }
    return s;
}
bool is_palindrome(string s){
    for(int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--){
        if(s[i] != s[j]) return false;     
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    string s = to_string(n);
    string s1 = reverse_s(s);
    int idx;
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] != '0'){
            idx = i;
            break;
        }
    }
    s1.erase(0, idx);
    cout << s1 << '\n';
    (is_palindrome(s)) ? cout << "YES" : cout << "NO";
}