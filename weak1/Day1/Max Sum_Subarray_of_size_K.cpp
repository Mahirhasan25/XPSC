#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> num(n);
    for(auto &i : num) cin >> i;
    int l = 0, r = 0, sum = 0, mx = INT_MIN;

    while(r < n){
        sum += num[r];
        if(r < k - 1) r++;
        else{
            mx = max(mx, sum);
            sum -= num[l];
            l++;
            r++;
        }
    }
    cout << mx << '\n';
}