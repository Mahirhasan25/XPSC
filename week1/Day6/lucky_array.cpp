#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int,int> freq;
    int mn = 1e8;
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        freq[in]++;
        mn = min(mn, in);
    }
    (freq[mn] % 2 != 0) ? cout << "Lucky" : cout << "Unlucky";
}