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

void knapsack(int n, int l_of_rod_cut, int length[], int price_of_tukda[])
{
    int mat[n + 1][l_of_rod_cut + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < l_of_rod_cut + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                mat[i][j] = 0;
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < l_of_rod_cut + 1; j++)
        {
            if (length[i - 1] <= j)
            {
                mat[i][j] = max(price_of_tukda[i - 1] + mat[i][j - length[i - 1]], mat[i - 1][j]);
            }
            else
            {
                mat[i][j] = mat[i - 1][j];
            }
        }
    }

    
    cout<<mat[n][l_of_rod_cut];
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int l_of_rod_cut, i;
    cin >> i >> l_of_rod_cut;
    int price_of_tukda[i], length[i];
    for (auto &i : length)
        cin >> i;
    for (auto &i : price_of_tukda)
        cin >> i;
    knapsack(i, l_of_rod_cut, length, price_of_tukda);
    return 0;
}