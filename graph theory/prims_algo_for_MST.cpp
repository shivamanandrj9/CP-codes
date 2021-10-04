/*
सरस्वति महाभागे विद्ये कमललोचने |
विद्यारूपे विशालाक्षि विद्यां देहि नमोऽस्तु ते ||
*/

// https://www.youtube.com/watch?v=xthRL0lcx2w&t=1497s

//for 1 based index just take input as 0 based and modify it during output time
#include <iostream>
#include <algorithm>
#include <numeric>
#include <set>
#include <queue>
#include <climits>
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
#define qi queue<int>
#define mii map<int, int>
#define pii pair<int, int>
#define mip map<int, pair<int, int>>
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
#define ps(x, y) fixed << setprecision(y) << x
#define endl "\n"
#define sp << " " <<
#define P(x) cout << x << endl

const int mod = 1000000007;
const int INF = LLONG_MAX;

vi lis[101];
int graph[101][101];

int selectMinVertex(vector<int> &value, vector<bool> &setMST, int V)
{
    int minimum = INF;
    int vertex;
    for (int i = 0; i < V; ++i)
    {
        if (setMST[i] == false && value[i] < minimum)
        {
            vertex = i;
            minimum = value[i];
        }
    }
    return vertex;
}

void findMST(int V)
{
    int parent[V];
    vi value(V, INF);
    vector<bool> setMST(V, false);
    parent[0] = -1;
    value[0] = 0;
    for (int i = 0; i < V - 1; i++)
    {
        int U = selectMinVertex(value, setMST, V);
        setMST[U] = true;
        for (int child : lis[U])
        {
            if (!setMST[child] && graph[U][child] < value[child])
            {
                value[child] = graph[U][child];
                parent[child] = U;
            }
        }
    }
    for (int i = 1; i < V; ++i)
    {
        cout << "U->V: " << parent[i] << "->" << i << "  wt = " << graph[parent[i]][i] << "\n";
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        lis[a].pb(b);
        lis[b].pb(a);
        graph[a][b] = w;
        graph[b][a] = w;
    }
    findMST(n);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}