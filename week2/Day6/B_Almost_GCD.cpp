/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
void div(unordered_map<int, int> &freq, int n){
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            freq[i]++;
            if(i*i != n){
                freq[n/i]++;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        div(freq, in);
    }
    int value = 0, mx = 0;
    for(int i = 2; i <= 1000; i++){
        if(freq[i] > mx){
            value = i;
            mx = freq[i];
        }
    }
    cout << value << '\n';
}