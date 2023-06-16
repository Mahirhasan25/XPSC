#include<bits/stdc++.h>
using namespace std;

vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
    priority_queue<pair<int, int>> pq;
    vector<int> ans;
        for(int i = 0; i < k; i++){
            pq.push({arr[i], i});
        }
        ans.push_back(pq.top().first);
        for(int i = k; i < n; i++){
            pq.push({arr[i], i});
            while(!pq.empty() and pq.top().second <= i - k){
                pq.pop();
            }
            ans.push_back(pq.top().first);
    }
    return ans;
}
int main(){
 vector<int> arr = { 2, 3, 7, 9, 5, 1, 6, 4, 3 };
 int  n = 9, k = 3;
 vector<int> ans = max_of_subarrays(arr, n, k);
 for(auto v : ans) cout << v << ' ';
}