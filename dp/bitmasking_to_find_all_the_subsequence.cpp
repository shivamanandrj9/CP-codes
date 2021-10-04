//printing all the subsequence of a string

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

const int mod=1000000007;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s="ram";
    int temp=pow(3,2);
    int arr[temp];
    for(int i=0;i<temp;i++)
    {
        arr[i]=i;
    }
    for(int i=0;i<temp;i++)
    {
        string x="";
        for(int j=0;j<3;j++)
        {
            if(arr[i]&1==1)
            {
                x.pb(s[2-j]);
                
            }
            arr[i]>>=1;
        }
        reverse(x.begin(),x.end());
        cout<<x<<endl;
    }
    return 0;
}