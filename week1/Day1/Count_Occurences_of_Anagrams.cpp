#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int search(string pat, string txt) {
    int l = 0, r = 0, cnt = 0;
    int freq[26] = {0};
    int freq1[26] = {0};
    for(auto ch : pat) freq[ch - 'a']++;
    while(r < txt.size()){

        freq1[txt[r] - 'a']++;

        if(r < pat.size() - 1) r++;
        else{
            bool flag = true;
            for(int i=0;i<26;i++){
                if(freq[i] != freq1[i]){
                    flag = false;
                    break;
                }
            }
            if(flag) cnt++;
            freq1[txt[l] - 'a']--;
            l++;
            r++;
        }
    }
    return cnt;
}
int main(){
    string pat, txt;
    txt = "forxxorfxdofr";
    pat = "for";
    cout << search(pat, txt);
}