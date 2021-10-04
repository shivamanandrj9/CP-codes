#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<string> a;
  string s="ram";
  a.push_back(s); // or use a.push_back("ram")
  cout<<a.size();
}