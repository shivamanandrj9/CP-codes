// सरस्वति महाभागे विद्ये कमललोचने |
// विद्यारूपे विशालाक्षि विद्यां देहि नमोऽस्तु ते ||

#include <iostream>
#include <algorithm>
#include <numeric>
#include <set>
#include <queue>
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
#define qi queue<int>
#define mii map<int, int>
#define pii pair<int, int>
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

vi lis[10001];
int vis[10001], dis[10001];

void bfs(int node)
{
    qi q;
    vis[node] = 1;
    q.push(node);
    dis[node] = 0;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (int child : lis[curr])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                dis[child] = dis[curr] + 1;
            }
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    FOR(i, 0, m)
    {
        int a, b;
        cin>>a>>b;
        lis[a].pb(b);
        lis[b].pb(a);
    }
    bfs(1);
    cout << dis[n];
    FOR(i, 0, 10001)
    {
        lis[i].clear();
        vis[i] = 0;
        dis[i] = 0;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}