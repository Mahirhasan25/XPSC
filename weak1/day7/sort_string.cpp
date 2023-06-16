#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char s;
    int freq[26] = {0};
    for(int i = 0; i < n; i++){
        cin >> s;
        freq[s - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < freq[i]; j++){
            char ch = i + 97;
            cout << ch; 
        }
    }
}