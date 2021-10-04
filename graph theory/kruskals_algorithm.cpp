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

int parent[101], size[101];

int find_set(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

void dsu(int n)
{
    FOR(i, 0, 100)
    {
        parent[i] = i;
        size[i] = 1;
    }
}

typedef struct edge {
	int src;
	int dst;
	int wt;
}edge;

bool comparator(edge a,edge b)
{
	return a.wt < b.wt;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    dsu(n);
    vector<edge> v;
    cout<<endl<<endl;
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        edge temp;
        temp.dst=a;
        temp.src=b;
        temp.wt=c;
        v.pb(temp);
    }
    sort(all(v),comparator);
    int count=0;
    FOR(i,0,v.size())
    {
        if(count>=n-1)
        {
            break;
        }
        int x=find_set(v[i].src);
        int y=find_set(v[i].dst);
        if(x!=y)
        {
            cout<<v[i].src sp v[i].dst sp v[i].wt<<endl;
            union_sets(x,y);
            count++;
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