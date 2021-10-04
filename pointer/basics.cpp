#include<iostream>
using namespace std;
int main()
{
    int x=3;
    cout<<&x<<endl;
    int *ptr;
    ptr=&x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr+1<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;    //this is giving a garbage value as not ptr stores the location of ptr+1
}