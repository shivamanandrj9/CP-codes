#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,3,1,4,5};
    int *ptr;
    ptr=&a[0];
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<&a[1]<<endl;
    cout<<ptr+1<<endl;
    return 0;

}