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
#define P(x) cout<<x<<endl
 
const int mod=1000000007;
const int INF = LLONG_MAX;
 
vector<pii> adj[100001];
int vis[100001];
 
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].pb({b,w});
        
    }
 
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    vector<int> dist(n+1,INF);
    dist[1]=0;
    pq.push({0,1});
    while(!pq.empty())
    {
        int curr=pq.top().ss;
        int curr_d=pq.top().ff;

        pq.pop();
        if(vis[curr])
        {
            continue;
        }
        vis[curr]=1;
        for(pii edge:adj[curr])
        {
            if(curr_d + edge.ss <dist[edge.ff])
            {
                dist[edge.ff]=curr_d + edge.ss;
                pq.push({dist[edge.ff],edge.ff});
            }
        }
    }
    FOR(i,1,n+1)
    {
        cout<<dist[i]<<" ";
    }
    return 0;
}