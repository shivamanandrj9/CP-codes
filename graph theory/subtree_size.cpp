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

vi lis[1001];
int vis[1001];
int subsize[1001];

int dfs(int node)
{
    vis[node]=1;
    int curr_size=1;
    for(int child:lis[node])
    {
        if(!vis[child])
        {
            curr_size+=dfs(child);
        }
    }
    subsize[node]=curr_size;
    return curr_size;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    FOR(i,0,n-1)
    {
        int n,m;
        cin>>n>>m;
        lis[n].pb(m);
        lis[m].pb(n);
    }
    int temp=dfs(1);
    FOR(i,1,n+1)
    {
        cout<<subsize[i]<<" ";
    }
    return 0;
}