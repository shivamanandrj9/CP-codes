#include <iostream>
#include <algorithm>
#include <numeric>
#include <set>
#include <queue>
#include <climits>
#include <deque>
#include <map>
#include <cmath>
#include <vector>
#include <cstring>
#include <iomanip>
#include <ctype.h>

using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int k;
    cin>>k;
    vector<long long int> cum;
    cum.push_back(0);
    for(int i=0;i<n;i++)
    {
        cum.push_back(cum.back()+arr[i]);
    }
    map<int,int> m;
    for(int i=0;i<cum.size();i++)
    {
        m[cum[i]-k]=0;

    }
    long long int ans=0;
    for(int i=0;i<cum.size();i++)
    {
        ans+=m[cum[i]-k];
        m[cum[i]]++;
    }
    cout<<ans;
}