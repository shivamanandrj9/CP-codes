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

int V; //No of vertices

void solve()
{
    int n, m;
    cin >> n >> m;
    V = n;
    int graph[V][V];

    FOR(i, 0, V)
    {
        FOR(j, 0, V)
        {
            graph[i][j] = INF;
        }
    }
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        cin >> graph[x][y];
    }

    for (int k = 0; k < V; ++k)         //Try all intermediate nodes
        for (int i = 0; i < V; ++i)     //Try for all possible starting position
            for (int j = 0; j < V; ++j) //Try for all possible ending position
            {
                if (graph[i][k] == INF || graph[k][j] == INF) //SKIP if K is unreachable from i or j is unreachable from k
                    continue;
                else if (graph[i][k] + graph[k][j] < graph[i][j]) //Check if new graphance is shorter via vertex K
                    graph[i][j] = graph[i][k] + graph[k][j];
            }

    //Check for negative edge weight cycle
    for (int i = 0; i < V; ++i)
        if (graph[i][i] < 0)
        {
            cout << "Negative edge weight cycle is present\n";
            return;
        }

    //Print Shortest Path Graph
    //(Values printed as INF defines there is no path)
    for (int i = 1; i < V; ++i)
    {
        for (int j = 0; j < V; ++j)
            cout << i << " to " << j << " graphance is " << graph[i][j] << "\n";
        cout << "=================================\n";
    }
}

//TIME COMPLEXITY: O(V^3)
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