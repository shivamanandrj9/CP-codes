// https://www.youtube.com/watch?v=7CTpoVNIc8o&list=PL2q4fbVm1Ik6DCzm9XZJbNwyHtHGclcEh&index=29

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

vi lis[101];
vi res;
int in[101];

void kahn(int n)
{
    qi q;
    FOR(i,1,n+1)
    {
        if(in[i]==0)
        {
            q.push(i);
        }
    }

    while(!q.empty())
    {
        int curr=q.front();
        res.pb(curr);
        q.pop();
        for(int node:lis[curr])
        {
            in[node]--;
            if(in[node]==0)
            q.push(node);
        }
    }

    put(res);

}

void solve()
{
    int n,m,x,y;
    cin>>n>>m;
    FOR(i,1,m+1)
    {
        cin>>x>>y;
        lis[x].pb(y);
        in[y]++;
    }
    kahn(n);
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