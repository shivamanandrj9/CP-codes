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
#define P(x) cout<<x

const int mod=1000000007;
const int INF = 0x3f3f3f3f;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    vector<string> v;
    sort(all(s));
    v.pb(s);
    while(next_permutation(all(s)))
    {
        v.pb(s);
    }
    cout<<v.size()<<endl;
    FOR(i,0,v.size())
    {
        cout<<v[i]<<endl;
    }
    return 0;
}