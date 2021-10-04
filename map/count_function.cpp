#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["a"]=1;
    mp["b"]=3;
    mp["c"]=5;
    mp["a"]=5;
    
    cout<<mp.count("a");
}