#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int i = 1;
    while(true){
        if(a > b){
            cout << "-1";
            break;
        }else if(i * c > b){
            cout << "-1";
            break;
        }else if(i * c >= a and i * c <= b){
            cout << i * c;
            break;
        }
        i++;
    }
}