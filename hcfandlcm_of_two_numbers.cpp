#include<iostream>
using namespace std;
int hcf(int a,int b)
{
    if(b>a)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    if(b==0)
    {
        return a;
    }
    else
    {
        return hcf(a%b,b);
    }
}

int lcm(int a,int b)
{
    return (a*b)/hcf(a,b);
}
int main()
{
    
    cout<<hcf(12,12);
    cout<<lcm(6,6);
}