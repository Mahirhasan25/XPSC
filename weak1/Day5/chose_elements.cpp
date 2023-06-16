#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    long long int sum = 0;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        if(in < 0) continue;
        v.push_back(in);
    }
    if(v.empty()){cout << "0";return 0;}
    sort(v.begin(), v.end());
    for(int i = 0; !v.empty() and i < k; i++){
        sum += v.back();
        v.pop_back();
    }
    cout << sum;
}