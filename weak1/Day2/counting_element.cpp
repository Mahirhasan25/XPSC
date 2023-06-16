#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v) cin >> i;
    for(int i = 0; i < n; i++){
        int ser = v[i] + 1;
        auto it = find(v.begin(), v.end(), ser);
        if(it != v.end()) cnt++;
    }
    cout << cnt;
}