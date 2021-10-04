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

const int mod=1000000007;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    for(int i=0;i<5;i++)
    {
        string temp; //always as a string
        cin>>temp;
        s.insert(i,temp);
    }

    cout<<s;
    return 0;
}