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
#define pub push_back
#define pob pop_back
#define rep(x, y) for(int i = x; i < y; i++)
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int l, r;
        scanf("%d %d", &l, &r);

        // Choose a to be the smallest prime in the range [l, r]
        int a = l + (l % 2 == 0); // Start with the first even number in the range
        int b = a + 1;            // b is the next number

        printf("%d %d\n", a, b);
    }

    return 0;
}