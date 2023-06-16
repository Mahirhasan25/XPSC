#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
void rec(int n, string s){
    if(n == 0){
        int num = stoi(s);
        ans.push_back(num);
        return;
    } 
    rec(n - 1, s += '4');
    s.erase(s.begin() + s.size() - 1);
    rec(n - 1, s += '7');
}
int main(){
    int n, m;
    cin >> n >> m;
    string s = "";
    for(int i = 1; i <= 7; i++){
        rec(i, s);
    }
    bool flag = true;
    for(auto v : ans){
        if(v >= n and v <= m){
            flag = false;
            cout << v << ' ';
        }
    }
    if(flag) cout << "-1";
}
