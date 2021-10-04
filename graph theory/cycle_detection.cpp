// सरस्वति महाभागे विद्ये कमललोचने |
// विद्यारूपे विशालाक्षि विद्यां देहि नमोऽस्तु ते ||

/*  0 1
    1 2
    2 3
    0 2
*/

//https://www.youtube.com/watch?v=Y9NFqI6Pzd4

// सरस्वति महाभागे विद्ये कमललोचने |
// विद्यारूपे विशालाक्षि विद्यां देहि नमोऽस्तु ते ||

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
#define vi vector<int>
#define mii map<int, int>
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define double long double
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define get(a)        \
    for (auto &i : a) \
    cin >> i
#define put(a)        \
    for (auto &i : a) \
    cout << i << " "

const int mod = 1000000007;

vi lis[4];
int vis[4];

bool dfs(int node, int par)
{
    vis[node] = 1;
    for (int child : lis[node])
    {
        if (vis[child])
        {
            if (child != par)
            {
                return true;
            }
        }
        else
        {
            dfs(child, node);
        }
    }
    return false;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    FOR(i, 0, n)
    {
        int m, n;
        cin >> m >> n;
        lis[m].pb(n);
        lis[n].pb(m);
    }
    if (dfs(0, -1))
    {
        cout << "CYCLE";
    }
    else
    {
        cout << "NO CYCLE";
    }
    return 0;
}