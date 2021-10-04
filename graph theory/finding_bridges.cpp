/*
सरस्वति महाभागे विद्ये कमललोचने |
विद्यारूपे विशालाक्षि विद्यां देहि नमोऽस्तु ते ||
*/

#include<iostream>
#include<algorithm>
#include<numeric>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<cmath>
#include<vector>
#include<cstring>
#include<iomanip>
#include<climits>

using namespace std;

#define int long long
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define qi queue<int>
#define mii map<int,int>
#define pii pair<int,int>
#define mip map<int,pair<int,int>>
#define FOR(i,k,n) for(int i=k;i<n;i++)
#define double long double
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define get(a) for(auto &i:a) cin>>i
#define put(a) for(auto &i:a) cout<<i<<" "
#define endl "\n"
#define sp <<" "<<
#define ps(x,y) fixed<<setprecision(y)<<x
#define P(x) cout<<x<<endl

const int mod=1000000007;
const int INF = LLONG_MAX;

vi lis[101];
int in[101],low[101],vis[101],timer;

void dfs(int node,int par)
{
    vis[node]=1;
    in[node]=timer;
    low[node]=timer;
    timer++;
    for(int child:lis[node])
    {
        if(child==par)
        {
            continue;
        }
        if(vis[child])
        {
            low[node]=min(low[node],in[child]);
        }
        else
        {
            dfs(child,node);
            if(low[child]>in[node])
            {
                cout<<node<<"-"<<child<<" is a bridge\n";
            }
            low[node]=min(low[node],low[child]);
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        lis[a].pb(b);
        lis[b].pb(a);
    }
    dfs(1,-1);
    return 0;
}