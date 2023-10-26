/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define pub push_back
#define pob pop_back
#define rep(x, y) for(int i = x; i < y; i++)
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    if(n < 3)
        return ans;
    sort(all(nums));
    for(int i = 0; i < n - 2; i++){
        if(i > 0 && nums[i] == nums[i-1])
            continue;
        int l = i + 1;
        int r = n - 1;
        while(l < r){
            int sum = nums[i] + nums[l] + nums[r];
            if(sum < 0)
                l++;
            else if(sum > 0)
                r--;
            else{
                ans.push_back({nums[i], nums[l] , nums[r]});
                while(l < r && nums[l] == nums[l+1]) l++;
                while(l < r && nums[r] == nums[r - 1]) r--;
                l++, r--;
            }
        }
    }
    return ans;
}
int main(){
    fast
    vector<int> num = {0,0,0};
    vector<vector<int>> ans = threeSum(num);
    for(int i = 0; i < ans.size(); i++){
        for(auto j : ans[i]){
            cout << j << ' ';
        }
        cout << '\n';
    }
}