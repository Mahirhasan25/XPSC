#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    for(int i = 0; a * i <= c; i++){
        for(int j = 0; b * j <= c; j++){
            if(a * i + b * j == c){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}