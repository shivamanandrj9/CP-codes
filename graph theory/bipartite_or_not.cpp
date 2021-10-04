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
#define double long double
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define double long double
#define get(a)        \
    for (auto &i : a) \
    cin >> i
#define put(a)        \
    for (auto &i : a) \
    cout << i << " "

const int mod = 1000000007;

vi lis[2001];
int vis[2001];
int col[2001];

bool dfs(int node, int b)
{
    vis[node] = 1;
    col[node] = b;
    for (int child : lis[node])
    {
        if (!vis[child])
        {
            if (!dfs(child, col[node] ^ 1))
            {
                return false;
            }
        }
        else
        {
            if (col[child] == col[node])
            {
                return false;
            }
        }
    }
    return true;
}

void solve(int t)
{
    int n, m;
    cin >> n >> m;
    FOR(i, 0, 2001)
    {
        lis[i].clear();
        vis[i] = 0;
        col[i] = 0;
    }
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        lis[a].pb(b);
        lis[b].pb(a);
    }
    bool flag = true;

    FOR(i, 1, n + 1)
    {
        if (vis[i] == 0)
        {
            if (!dfs(i, 0))
            {
                flag = false;
            }
        }
    }
    if (flag)
    {
        cout << "Scenario #" << t << ":" << endl;
        cout << "No suspicious bugs found!";
    }
    else
    {
        cout << "Scenario #" << t << ":" << endl;
        cout << "Suspicious bugs found!";
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    FOR(i, 1, t + 1)
    {
        solve(i);
        cout << endl;
    }
    return 0;
}