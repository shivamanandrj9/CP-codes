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

const int mod = 1000000007;

void knapsack(int n, int w, int wt[], int val[])
{
    int mat[n + 1][w + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                mat[i][j] = 0;
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                mat[i][j] = max(val[i - 1] + mat[i - 1][j - wt[i - 1]], mat[i - 1][j]);
            }
            else
            {
                mat[i][j] = mat[i - 1][j];
            }
        }
    }

    
    cout<<mat[n][w];
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int w, i;
    cin >> i >> w;
    int val[i], wt[i];
    for (auto &i : wt)
        cin >> i;
    for (auto &i : val)
        cin >> i;
    knapsack(i, w, wt, val);
    return 0;
}