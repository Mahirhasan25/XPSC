/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int freq[n+1] = {0};
    for(int i = 1; i <= n; i++){
        int in;
        cin >> in;
        freq[in]++;
    }
    for(int i = 1; i <= n; i++){
        if(freq[i] == 0){
            cout << i;
            break;
        }
    }
}