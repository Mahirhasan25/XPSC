#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ev_cnt = 0, od_cnt = 0, pos_cnt = 0, neg_cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        if(in % 2 == 0)
            ev_cnt++;
        if(in % 2 != 0)
            od_cnt++;
        if(in > 0)
            pos_cnt++;
        if(in < 0)
            neg_cnt++;
    }
    cout << "Even: " << ev_cnt << '\n' << "Odd: " << od_cnt << '\n' << "Positive: " << pos_cnt << '\n' << "Negative: " << neg_cnt;
}
