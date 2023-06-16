/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> ev, od;
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        if(in % 2 == 0)
            ev.push_back(in);
        else
            od.push_back(in);
    }
    sort(od.begin(), od.end(), greater<int>());
    ll sum = 0;
    for(int i = 0; i < ev.size(); i++)
        sum += ev[i];
    if(od.size() % 2 == 0){
        for(int i = 0; i < od.size(); i++)
            sum += od[i];
    }else{
        for(int i = 0; i < od.size() - 1; i++)
            sum += od[i];
    }
    cout << sum;

}