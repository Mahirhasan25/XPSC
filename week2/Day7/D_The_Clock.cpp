/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
bool is_pal(int hh, int mm){
    string s = "";
    if(hh < 10) s += '0';
    else s += hh/10 +'0';
    s += hh%10 + '0';

    if(mm < 10) s += '0';
    else s += mm/10 +'0';
    s += mm%10 + '0';
    auto t = s;
    reverse(t.begin(), t.end());
    if(s == t) return true;
    return false;
}
void solve(){
    int hour, minute, x;
    char skip;
    cin >> hour >> skip >> minute >> x;
    int th = hour, tm = minute;
    int cnt = 0;
    if(is_pal(hour, minute)) cnt++;
    minute += x;
    hour += minute / 60;
    minute %= 60;
    hour %= 24;
    while(hour != th || minute != tm){
        if(is_pal(hour, minute)) cnt++;
        minute += x;
        hour += minute / 60;
        minute %= 60;
        hour %= 24;
    }   
    cout << cnt << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}