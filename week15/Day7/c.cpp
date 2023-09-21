/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define minus cout << "-1" << '\n'
#define pub push_back
#define pob pop_back
#define rep(x, y) for(int i = x; i < y; i++)
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

void solve(){
    char arr[11][11];
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            cin >> arr[i][j];
        }
    }
    int p1=0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    for(int i = 1; i <= 10; i++){
        if(arr[1][i] == 'X') p1++;
        if(arr[10][i] == 'X') p1++;
        if(i < 9 && arr[i+1][1] == 'X') p1++;
        if(i < 9 && arr[i+1][10] == 'X') p1++;
    }
    for(int i = 2; i <= 9; i++){
        if(arr[2][i] == 'X') p2++;
        if(arr[9][i] == 'X') p2++;
        if(i < 8 && arr[i+1][2] == 'X') p2++;
        if(i < 8 && arr[i+1][9] == 'X') p2++;
    }
    for(int i = 3; i <= 8; i++){
        if(arr[3][i] == 'X') p3++;
        if(arr[8][i] == 'X') p3++;
        if(i < 7 && arr[i+1][3] == 'X') p3++;
        if(i < 7 && arr[i+1][8] == 'X') p3++;
    }
    for(int i = 4; i <= 7; i++){
        if(arr[4][i] == 'X') p4++;
        if(arr[7][i] == 'X') p4++;
        if(i < 6 && arr[i+1][4] == 'X') p4++;
        if(i < 6 && arr[i+1][7] == 'X') p4++;
    }
    for(int i = 5; i <= 6; i++){
        if(arr[5][i] == 'X') p5++;
        if(arr[6][i] == 'X') p5++;
        if(i < 5 && arr[i+1][5] == 'X') p5++;
        if(i < 5 && arr[i+1][6] == 'X') p5++;
    }

    int sum = p1 * 1 + p2 * 2 + p3 * 3 + p4 * 4 + p5 * 5;
    print(sum);
}
int main(){
    fast
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}