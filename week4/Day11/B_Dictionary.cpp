// /*
//        || Mahir Hasan ||
// */

// #include <bits/stdc++.h>
// #define ll long long int
// #define vpair vector<pair<ll, ll>>
// #define PI 3.14159265359
// #define cyes cout << "YES" << '\n'
// #define cno cout << "NO" << '\n'
// #define print(x) cout << x << '\n'
// #define minus cout << "-1" << '\n'
// #define pub push_back
// #define pob pop_back
// #define rep(x, y) for(int i = x; i < y; i++)
// #define all(x) (x).begin(),(x).end()
// #define fast ios_base::sync_with_stdio(false);\
//     cin.tie(NULL);
// using namespace std;

// int main(){
//     fast
//     string w = "aa";
//     map<string , int> idx;
//     int ans = 1;
//     for(w[0] = 'a'; w[0] <= 'z'; w[0]++){
//         for(w[1] = 'a'; w[1] <= 'z'; w[1]++){
//             if(w[0] != w[1]){
//                 idx[w] = ans;
//                 ans++;
//             }
//         }
//     }
//     int t; 
//     cin >> t;
//     while(t--){
//         string s; cin >> s;
//         cout << idx[s] << '\n';
//     }
// }
#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    string w = "aa";
    map<string, int> idx;
    int i = 1;
    for(w[0] = 'a'; w[0] <= 'z'; w[0]++)
        for(w[1] = 'a'; w[1] <= 'z'; w[1]++)
            if(w[0] != w[1])
                idx[w] = i++;
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        cout << idx[s] << endl;
    }   
}