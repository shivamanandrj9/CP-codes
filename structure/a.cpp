#include<iostream>
#include<cstring>
using namespace std;
struct student
{
    char name[26];
    int roll;
};

int main()
{
  student S1;
  cin>>S1.name;
  
  S1.roll = 5;
  cout<<S1.name;
  return 0;
}