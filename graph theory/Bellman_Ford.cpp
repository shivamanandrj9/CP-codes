/*
सरस्वति महाभागे विद्ये कमललोचने |
विद्यारूपे विशालाक्षि विद्यां देहि नमोऽस्तु ते ||
*/

//0 based

//https://www.youtube.com/watch?v=24HziTZ8_xo

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

int v, e;

typedef struct edge
{
    int src;
    int dst;
    int wt;
} edge;

void bellmanford(vector<edge> &edges)
{
    vi parent(v);
    vi cost_parent(v);
    vi dist(v, INF);

    parent[0] = -1;  //just for printing purpose
    dist[0] = 0;

    bool updated;
    FOR(i, 0, v - 1)
    {
        updated = false;
        FOR(j, 0, e)
        {

            int U = edges[j].src;
            int V = edges[j].dst;
            int wt = edges[j].wt;
            if (dist[U] != INT_MAX and dist[U] + wt < dist[V])
            {
                dist[V] = dist[U] + wt;
                parent[V] = U;
                cost_parent[V] = dist[V];
                updated = true;
            }
        }
        if (updated == false)
        {
            break;
        }
    }

    FOR(j, 0, e)
    {
        int U = edges[j].src;
        int V = edges[j].dst;
        int wt = edges[j].wt;
        if (dist[U] != INT_MAX and dist[U] + wt < dist[V])
        {
            cout << "Graph has -VE edge cycle\n";
            return;
        }
    }

    FOR(i,1,v)
    {
        cout<<"U->V: "<<parent[i]<<"->"<<i<<"  Cost to reach "<<parent[i]<<"from source 0 = "<<dist[i]<<"\n";
    }
}
void solve()
{
    cin >> v >> e;
    vector<edge> edges;
    FOR(i, 0, e)
    {
        edge temp;
        cin >> temp.src;
        cin >> temp.dst;
        cin >> temp.wt;
        edges.pb(temp);
    }
    bellmanford(edges);
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