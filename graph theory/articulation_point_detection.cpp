//https://www.youtube.com/watch?v=64KK9K4RpKE

/*
सरस्वति महाभागे विद्ये कमललोचने |
विद्यारूपे विशालाक्षि विद्यां देहि नमोऽस्तु ते ||
*/

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
#define V 100001
void dfs(int u,vi& disc,vi& low,vi& parent,vector<bool>& articulation_point)
{
    static int time=0; //static dont let time to re-initialize
    disc[u]=low[u]=time;
    time++;
    int children=0;
    for(int v:lis[u])
    {
        if(disc[v]==-1)
        {
            children++;
            parent[v]=u;
            dfs(v,disc,low,parent,articulation_point);
            low[u]=min(low[u],low[v]);
            if(parent[u]==-1 && children>1)  //case 1
            {
                articulation_point[u]=true;
            }
            if(parent[u]!=-1 && low[v]>=disc[u]) //case 2
            {
                articulation_point[u]=true;
            }

        }
        else if(v!=parent[u])  //ignore child to parent edge
        {
            low[u]=min(low[u],disc[v]);
        }
    }
}

void findAPs_Tarjan()
{
    vi disc(V,-1),low(V,-1),parent(V,-1);
    vector<bool> articulation_point(V,false);
    for(int i=1;i<V;i++)
    {
        if(disc[i]==-1)
        {
            dfs(i,disc,low,parent,articulation_point);
        }
    }

    cout<<"Articulation points are ";
    FOR(i,0,V)
    {
        if(articulation_point[i]==true)
        {
            cout<<i<<" ";
        }
    }
    
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
        lis[b].pb(a);
    }

    findAPs_Tarjan();

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