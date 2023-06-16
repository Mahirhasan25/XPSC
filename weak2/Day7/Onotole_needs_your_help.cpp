/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int,int> freq;
    int n;
    cin >> n;vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        freq[v[i]]++;
    }

    for(int i = 0; i < v.size(); i++){
        if(freq[v[i]] == 1){
            cout << v[i] << '\n';
            return 0;
        }
    }
}