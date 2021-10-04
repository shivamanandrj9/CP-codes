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

int unbounded_knapsack(int n,int arr[],int sum)
{
    int mat[n+1][sum+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
            {
                mat[i][j]=INT_MAX-1;
                continue;
            }
            if(j==0)
            {
                mat[i][j]=0;
            }
        }
    }
    for(int j=1;j<sum+1;j++)
    {
        if(j%arr[0]==0)
        {
            mat[1][j]=j/arr[0];
        }
        else
        {
            mat[1][j]=INT_MAX-1;
        }
    }

    for(int i=2;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(arr[i-1]<=j)
            {
                mat[i][j]=min(1+mat[i][j-arr[i-1]],mat[i-1][j]);
            }
            else
            {
                mat[i][j]=mat[i-1][j];
            }
        }
    }
    return mat[n][sum];
    
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(auto &i:arr) cin>>i;
    int sum;
    cin>>sum;
    //this is similar to the rod cutting problem but here usme each segment ki price ki baat ho rahi thi isme uski 
    //quantity ki baat ho rahi matlab ki value array of respective coin ko 1 manenge
    return 0;
}