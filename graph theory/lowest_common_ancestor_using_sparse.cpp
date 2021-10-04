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

 //FOR(i,1,n+1) <--- imp
vi lis[100001];
int vis[100001];
int st[1000001][20];  // st[i][j]=(2^j)th parent of i
 
void dfs(int node,int par)
{
    st[node][0]=par;
    for(int child:lis[node])
    {
        if(child!=par)
        {
            dfs(child,node);
        }
    }
}

void buildsparse()
{
    dfs(1,-1);  //root is 1

}
 


void solve()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        
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