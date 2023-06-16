#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int cor_pass = 1999;
    while(true){
        int in;
        cin >> in;
        if(in != cor_pass) cout << "Wrong" << '\n';
        else{
            cout << "Correct"; return 0;
        }
    }
}