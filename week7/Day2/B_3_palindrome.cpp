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

int main(){
    fast
    int n; cin >> n;
    string s = "";
    bool flag = true;
    if(n & 1){
        for(int i = 0; i < (n+1)/2; i++){
            if(flag){
                for(int j = 0; j < 2; j++){
                    s += 'a';
                }
                flag = false;
            }else{
                for(int j = 0; j < 2; j++){
                    s += 'b';
                }
                flag = true;                
            }
        }
        s.pop_back(); print(s);
    }else{
        for(int i = 0; i < n/2; i++){
            if(flag){
                for(int j = 0; j < 2; j++){
                    s += 'a';
                }
                flag = false;
            }else{
                for(int j = 0; j < 2; j++){
                    s += 'b';
                }
                flag = true;                
            }
        }
        print(s);
    }
}