#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    map<string,vector<int>> mp;
    mp["ram"].push_back(5);
    mp["ram"].push_back(6);
    mp["ram"].push_back(5);
    for(auto &i:mp["ram"]) cout<<i<<endl;
}