#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int array[]={6,2,4,5,8,2,1,3};
    sort(array,array+8);
    for(int i=0;i<8;i++)
        cout<<array[i]<<endl;
    return 0;
}