#include<bits/stdc++.h>
using namespace std;
int main(){
    float x;
    cin >> x;
    string a = to_string(x);
    int idx;
    for(int i=0;i<a.size();i++){
        if(a[i] == '.'){
            idx = i + 1;
            break;
        }
    }
    ((a[idx] - '0') < 5) ? cout << floor(x) : cout << ceil(x);
}