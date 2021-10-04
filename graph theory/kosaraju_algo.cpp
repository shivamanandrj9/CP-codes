/*
सरस्वति महाभागे विद्ये कमललोचने |
विद्यारूपे विशालाक्षि विद्यां देहि नमोऽस्तु ते ||
*/


// https://www.youtube.com/watch?v=Rs6DXyWpWrI

#include<iostream>
#include<algorithm>
#include<numeric>
#include<set>
#include<queue>
#include<climits>
#include<deque>
#include<map>
#include<cmath>
#include<vector>
#include<cstring>
#include<iomanip>

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
#define double long double
#define FOR(i,k,n) for (int i = k; i < n; i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define double long double
#define get(a) for(auto &i:a) cin>>i
#define put(a) for(auto &i:a) cout<<i<<" "
#define ps(x,y) fixed<<setprecision(y)<<x
#define endl "\n"
#define sp <<" "<<
#define P(x) cout<<x<<endl

const int mod=1000000007;
const int INF = LLONG_MAX;

vi lis[100001];
vi trp[100001];  //transpose graph
int vis[100001];

vi order;
vi SCC;

void dfs(int node)
{
    vis[node]=1;
    for(int child:lis[node])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
    order.pb(node);
}

void dfs1(int node)
{
    vis[node]=1;
    for(int child:trp[node])
    {
        if(!vis[child])
        {
            dfs1(child);
        }
    }
    SCC.pb(node);
}

void solve()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        lis[a].pb(b);
        trp[b].pb(a);
    }
    
    FOR(i,0,n)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    put(order);
    cout<<endl;
    FOR(i,0,n)
    {
        vis[i]=0;
    }

    reverse(all(order));
    FOR(i,0,order.size())
    {
        if(!vis[order[i]])
        {
            SCC.clear();
            dfs1(order[i]);
            cout<<"dfs1 called from "<<order[i]<<" printed SCC"<<endl;
            put(SCC);
            cout<<endl;

        }
    }
    
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
         solve();
         cout<<endl;
     }
    return 0;
}