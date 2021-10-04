#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> input;
    input.push_back(5);
    input.push_back(10);
    input.push_back(12);
    input.push_back(58);
    input.push_back(8);
    input.push_back(53);
    input.push_back(11);
    sort(input.begin(),input.end());
    cout<<binary_search (input.begin(), input.end(), 8); 

}