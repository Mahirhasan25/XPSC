#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 3000 + 5;
typedef pair<int,int> pii;

int n;
vector<string>s;
int d1[N][N];
int d2[N][N];
int cur[N][N];

void TEST_CASES()
{
    cin>>n;
    s.clear();
    s.resize(n);
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            d1[i][j] = 0;
            d2[i][j] = 0;
            cur[i][j] = 0;
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        // currently in row i
        // taking the prefix sum
        for(int j=0; j<n; j++)
        {
            cur[i][j] = d1[i][j] + d2[i][j] + (j-1>=0?cur[i][j-1]:0);
        }
        // cout << "-------------"<< i << "-------------" << '\n';
        // for(int k = 0; k < n; k++){
        //     for(int j = 0; j < n; j++){
        //         cout << cur[k][j];
        //     }
        //     cout << '\n';
        // }
        for(int j=0; j<n; j++)
        {
            char eta = s[i][j];
            if(cur[i][j]%2) // this character is flipped
            {
                eta = ((eta -'0')^1) + '0'; 
            }
            if(eta == '1')
            {
                ans++;
                if(j-1>=0 && i+1 < n)
                    d1[i+1][j-1]++;
                else d1[i+1][j]++; //   +1 -1
                            // 1    -1
                if(j+1<n && i+1 < n)
                    d2[i+1][j+1]--;
            }
        }
        cout << "d1" << '\n';
        for(int k = 0; k < n; k++){
            for(int j = 0; j < n; j++){
                cout << d1[k][j];
            }
            cout << '\n';
        }
        cout << "d2" << '\n';
            for(int k = 0; k < n; k++){
            for(int j = 0; j < n; j++){
                cout << d2[k][j];
            }
            cout << '\n';
        }

        // for(int j=0; j<n; j++)
        // {
        //     if(i+1 >= n)
        //         break;
        //                                 //          i,j
        //                                 // i+1, j-1
        //                                 // down i+1 j
        //     if(j-1>=0)
        //         d1[i+1][j-1] += d1[i][j];
        //     else
        //         d1[i+1][j] += d1[i][j];

        //     if(j+1<n)                   // i,j
        //                                 //     i+1 j+1
        //         d2[i+1][j+1] += d2[i][j];
        // }
    }
    cout<<ans<<"\n";
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}