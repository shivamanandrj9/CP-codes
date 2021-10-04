#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    cout<<upper_bound(v.begin(), v.end(), 5) -v.begin();
}