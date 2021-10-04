#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> a;
    for(int i=0;i<3;i++)
    {
        vector<int> b;
        for(int j=0;j<4;j++)
        {
            b.push_back(j);
        }
        a.push_back(b);
    }
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<endl;
        }
    }
    return 0;
    
}