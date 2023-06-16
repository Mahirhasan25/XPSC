#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    int l = 0, r = 0;
    queue<ll> q;
    vector<ll> arr;
    while(r < N){
        if(A[r] < 0) q.push(A[r]); 
        if(r < K - 1) r++;
        else{
            (q.empty()) ? arr.push_back(0) : arr.push_back(q.front());
            if(A[l] < 0) q.pop();
            l++;
            r++;
        }
    }  
    return arr;                                               
}
int main(){
    ll n = 5, k = 2;
    //cin >> n >> k;
    ll num[n] = {-8, 2, 3, -6, 10};
    //for(auto &i : num) cin >> i;
    vector<ll> arr = printFirstNegativeInteger(num, n, k);
    for(auto v : arr)
    cout << v << ' ';
}