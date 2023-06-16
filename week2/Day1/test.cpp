#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    int v = 3, k = 1;
    sum = (v-(k-1))*v - ((v-1)*v)/2 - ((k-1)*k)/2;
    cout << sum;
}