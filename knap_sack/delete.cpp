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

void knapsack(int n, int sum, int arr[])
{
    int mat[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
            {
                mat[i][j] = 0;
            }
            if (j == 0)
            {
                mat[i][j] = 1;
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                mat[i][j] = max(mat[i - 1][j - arr[i - 1]], mat[i - 1][j]);
            }
            else
            {
                mat[i][j] = mat[i - 1][j];
            }
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            cout<<mat[i][j]<<"  ";
        }
        cout<<endl;
    }
}

signed main()
{
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (auto &i : arr)
        cin >> i;
    knapsack(n, sum, arr);
    return 0;
}