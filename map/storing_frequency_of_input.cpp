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

const int mod=1000000007;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<int,int> m;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        m[a]++;
    }

    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        cout<<"the freq of "<<itr->first<<" is "<<itr->second<<endl;
    }
    return 0;
}