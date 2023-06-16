#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int freq[m + 1] = {0};
    for(int i = 1; i <= n; i++){
        int in;
        cin >> in;
        freq[in]++;
    }
    for(int i = 1; i <= m; i++){
        cout << freq[i] << '\n';
    }
}