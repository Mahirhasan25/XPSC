/*
       || Mahir Hasan ||
*/

#include <bits/stdc++.h>
using namespace std;
using namespace std;
#define ll long long int
#define vpair vector<pair<ll, ll>>
#define PI 3.14159265359
#define cyes cout << "YES" << '\n'
#define cno cout << "NO" << '\n'
#define print(x) cout << x << '\n'
#define pub push_back
#define pob pop_back
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    string temp1 = "meow";
    string s, temp2 = "";
    int n;
    cin >> n;
    cin >> s;
    for (auto &ch : s)
        ch = tolower(ch);
    char ch = s[0];
    temp2 += ch;
    for(int i = 1; i < n; i++){
        if(ch != s[i]){
            temp2 += s[i];
            ch = s[i];
        }
    }
    if(temp1 == temp2)print("YES");
    else print("NO");
}
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}