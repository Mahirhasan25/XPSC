#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main()
{
    int n,k;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        long long ans=1;
        for(int i=0;i<k;i++) ans=(ans*n)%MOD;
        cout << ans << '\n';
    }
}