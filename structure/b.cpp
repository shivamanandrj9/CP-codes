#include<bits/stdc++.h>
using namespace std;
struct book
{
    int id;
    int price[5];
    int total()
    {
        return price[0]+price[1]+price[2]+price[3]+price[4];
    };
    int subract(int x)
    {
        return total()-x;
    };
    
};
int main()
{
book b1;
for(int i=0;i<5;i++)
{
    cin>>b1.price[i];

}
cout<<b1.total();
cout<<b1.subract(5);
}