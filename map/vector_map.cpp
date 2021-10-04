#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    vector<map<int,string>> mp(2);
    mp[0][1]="ramesh";
    mp[0][3]="suresh";
    mp[1][5]="mohan";
    mp[1][8]="mangesh";
    for(auto itr=mp[0].begin();itr!=mp[0].end();++itr)
    {
        cout<<itr->first<<"   "<<itr->second<<endl;
    }
}