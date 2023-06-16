/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define pub push_back
#define pob pop_back
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);

int main(){
    fast
    string s; int k;
    cin >> s >> k;
    int unk = 0, ans = -1, freq[26] = {0};
    int i = 0, j = 0;
    while(j < s.size()){
            
        if(freq[s[j] - 'a'] == 0) unk++;
        freq[s[j] - 'a']++;
            
        if(unk > k){
                
            while(unk > k){
                    
                freq[s[i] - 'a']--;
                if(freq[s[i] - 'a'] == 0){
                    unk--; 
                }
                i++;
            }
                
        }
        if(unk == k){
            ans = max(ans, j - i + 1);
        }
            
        j++;
    }
    return ans;
}