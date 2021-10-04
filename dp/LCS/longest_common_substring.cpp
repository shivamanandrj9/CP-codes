#include<iostream>
#include<algorithm>
#include<numeric>
#include<set>
#include<deque>
#include<map>
#include<cmath>
#include<vector>
#include<cstring>
#include<iomanip>

using namespace std;

#define int long long
#define ff first
#define ss second
#define pb push_back

const int mod=1000000007;

int lcs(string x,string y,int m,int n)
{
    int mat[m+1][n+1];
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0 || j==0)
            {
                mat[i][j]=0;
            }
        }
    }

    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(x[i-1]==y[j-1])
            {
                mat[i][j]=1+mat[i-1][j-1];
            }
            else
            {
                mat[i][j]=0;
            }
        }
    }
    int max=INT_MIN;
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(mat[i][j]>max)
            {
                max=mat[i][j];
            }
        }
    }
    return max;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    a="NGPYCNPO";
    b="UQPXWVLGHC";
    cout<<lcs(a,b,a.size(),b.size());
    return 0;
}