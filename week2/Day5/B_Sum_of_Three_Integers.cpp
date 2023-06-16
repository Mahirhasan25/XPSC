/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            int z = m - i - j;
            if(z >= 0 and z <= n)
            cnt++;
        }
    }
    cout << cnt;
}