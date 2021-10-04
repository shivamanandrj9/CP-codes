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

void knapsack(int n,int arr[],int sum)
{
    int mat[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if(i==0)
            {
                mat[i][j]=0;
            }
            if(j==0)
            {
                mat[i][j]=1;
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                mat[i][j] = mat[i][j - arr[i - 1]]+mat[i - 1][j];
            }
            else
            {
                mat[i][j] = mat[i - 1][j];
            }
        }
    }

    cout << mat[n][sum];
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}