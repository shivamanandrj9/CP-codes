// सरस्वति महाभागे विद्ये कमललोचने |
// विद्यारूपे विशालाक्षि विद्यां देहि नमोऽस्तु ते ||

#include<iostream>
#include<algorithm>
#include<numeric>
#include<set>
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
#define mii map<int,int>
#define FOR(i,k,n) for(int i=k;i<n;i++)
#define double long double
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define get(a) for(auto &i:a) cin>>i
#define put(a) for(auto &i:a) cout<<i<<" "

const int mod=1000000007;

vi lis[100001];
int vis[100001];

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
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int cc=0;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        lis[a].pb(b);
        lis[b].pb(a);

    }
    FOR(i,1,n+1)
    {
        if(!vis[i])
        {
            dfs(i);
            cc++;
        }
    }
    cout<<cc;
    return 0;
}