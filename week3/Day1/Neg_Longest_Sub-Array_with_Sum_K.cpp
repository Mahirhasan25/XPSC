/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define pub push_back
#define pob pop_back
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);

int main(){
    fast
    int N, K; cin >> N >> K;
    vector<int> A(N);
    int sum = 0,ans = 0;
    unordered_map<long long int, int> save;
    for(int i = 0; i < N; i++){
        sum += A[i];
        if(sum == K){
            ans = max(ans , i + 1);
        }
        if(save.find(sum - K) != save.end()){
            int idx = save[sum - K];
            ans = max(ans , i - idx);
        }
        if(save.find(sum) == save.end()){
                save[sum] = i;
        }
    }
    cout << ans << '\n';
}