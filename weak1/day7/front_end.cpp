#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    deque<int> v(n);
    for(auto &i : v) cin >> i;
    bool flag = true;
    while(!v.empty()){
        if(flag){
            cout << v.front() << ' ';
            v.pop_front();
            flag = false;
        }else{
            cout << v.back() << ' ';
            v.pop_back();
            flag = true;
        }
    }
}