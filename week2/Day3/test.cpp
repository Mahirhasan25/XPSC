/*
       || Mahir Hasan ||
*/
// #include <bits/stdc++.h>
// using namespace std;
// #define input cin;
// #define print cout;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     input n;
//     print n; 
// }
#include <bits/stdc++.h>
using namespace std;

#define in cin >>
#define pr cout <<
#define v vector<int>

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  in n;
  v num(n);
  for(int &i : num){
    in i;
  }
  for(auto i : num) pr i << ' ';

  return 0;
}
