#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    map<int,int> mp;
    mp[1]=100;
    mp[2]=200;
    mp[3]=300;
    mp[4]=400;
    auto itr=mp.begin();
    advance(itr,2);
    cout<<itr->second;
}