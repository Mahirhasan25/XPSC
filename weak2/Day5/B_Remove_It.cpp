/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);   
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> num;
    for(int i = 0; i < n; i++){
        int in; cin >> in;
        num.push_back(in);
    }
    while(true){
        auto it = find(num.begin(), num.end(), x);
        if(it == num.end()) break;
        num.erase(it);
    }
    for(auto v : num)
        cout << v << ' ';
}