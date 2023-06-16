#include<bits/stdc++.h>
using namespace std;
void reverse(string &s){
    for(int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--){
        swap(s[i], s[j]);
    }
}
int main(){
    string text, r = "";
    getline(cin, text);
    stringstream s(text);
    string word;
    while(s >> word){
        reverse(word);
        r += word;
        r += ' ';
    }
    r.pop_back();
    cout << r;
}