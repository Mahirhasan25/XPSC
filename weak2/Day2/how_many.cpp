#include<bits/stdc++.h>
using namespace std;
int main(){
    int S, T,cnt = 0;
    cin >> S >> T;
    for(int a = 0; a <= 100; a++){
        for(int b = 0; b <= 100; b++){
            for(int c = 0; c <= 100; c++){
                if(a+b+c <= S and a*b*c <= T){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}