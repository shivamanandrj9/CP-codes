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

vi lis[10001];
int vis[10001];

int maxN,maxD;
void dfs(int node,int dist)
{
    vis[node]=1;
    if(dist>maxD)
    {
        maxD=dist;
        maxN=node;
    }
    for(int child:lis[node])
    {
        if(!vis[child])
        {
            dfs(child,dist+1);
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    FOR(i, 0, n-1)
    {
        int a, b;
        cin >> a >> b;
        lis[a].pb(b);
        lis[b].pb(a);
    }

    dfs(1,0);

    FOR(i,0,10001)
    {
        vis[i]=0;
    }
    dfs(maxN,0);
    cout<<maxD;
    return 0;
}