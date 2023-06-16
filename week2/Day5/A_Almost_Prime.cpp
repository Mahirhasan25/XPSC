/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> prime_mum;
    for(int i = 2; i <= n; i++){
        if(is_prime(i)){
            prime_mum.push_back(i);
        }
    }
    int cnt = 0, ans_cnt = 0;
    for(int i = 6; i <= n; i++){
        for(auto v : prime_mum){
            if(i % v == 0) {
                cnt++;
            }
        }
        if(cnt == 2){
            ans_cnt++;
            cnt = 0;
        }
        cnt = 0;
    }
    cout << ans_cnt;
}