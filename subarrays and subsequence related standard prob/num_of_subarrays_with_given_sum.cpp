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
#include<ctype.h>

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

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    get(arr);
    int k;
    cin>>k;
    vi cum;
    cum.pb(0);
    FOR(i,0,n)
    {
        cum.pb(cum.back()+arr[i]);
    }
    mii m;
    FOR(i,0,cum.size())
    {
        m[cum[i]-k]=0;

    }
    int ans=0;
    FOR(i,0,cum.size())
    {
        ans+=m[cum[i]-k];
        m[cum[i]]++;
    }
    cout<<ans;
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