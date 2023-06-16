#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &v, int l, int r){
    while(l < r){
        swap(v[l], v[r]);
        l++;
        r--;
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n + 1);
    int idx = 0;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        if(v[i] == 0){
            idx = i;
            reverse(v, 1, idx - 1);
        }
    }
    for(int i = 1; i <= n; i++){
        cout << v[i] << ' ';
    }
}