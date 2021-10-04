#include <iostream>
#include <algorithm>
#include <numeric>
#include <set>
#include <deque>
#include <map>
#include <cmath>
#include <vector>
#include <cstring>
#include <iomanip>

using namespace std;

#define int long long
#define ff first
#define ss second
#define pb push_back

const int mod = 1000000007;

void lcs(string x, string y, int m, int n)
{
    int mat[m + 1][n + 1];
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                mat[i][j] = 0;
            }
        }
    }

    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (x[i - 1] == y[j - 1])
            {
                mat[i][j] = 1 + mat[i - 1][j - 1];
            }
            else
            {
                mat[i][j] = max(mat[i - 1][j], mat[i][j - 1]);
            }
        }
    }
    
    string res="";

    int a=m;
    int b=n;
    while(a>0 && b>0)
    {
        if(x[a-1]==y[b-1])
        {
            res.pb(x[a-1]);
            a--;
            b--;
        }
        else
        {
            if(mat[a][b-1]>mat[a-1][b])
            {
                b--;
            }
            else
            {
                a--;
            }
        }
    }

    reverse(res.begin(),res.end());
    cout<<res;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string a="NGPYCNPO";
    string b="UQPXWVLGHC";
    lcs(a,b,a.size(),b.size());
    return 0;
}