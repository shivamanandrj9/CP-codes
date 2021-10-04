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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    pair<int,int> p[3];
    FOR(i,0,3)
    {
        p[i].ff=i-1;
        p[i].ss=i+1;
    }
    FOR(i,0,3)
    {
        cout<<p[i].ff<<" ";
        cout<<p[i].ss<<endl;
    }
    return 0;
}