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

int kadane(int n,int a[])
{
    int ans = INT_MIN, cur = 0;

    for (int i = 0; i < n; i++)
    {
        cur = cur + a[i];
        if (ans < cur)
        {
            ans = cur;
        }

        if (cur < 0)
        {
            cur = 0;
        }
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n=4;
    int arr[4]={1,-2,6,-7};
    cout<<kadane(n,arr);
    return 0;
}