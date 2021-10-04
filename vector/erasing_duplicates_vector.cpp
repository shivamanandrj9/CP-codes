#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> input;
    input.push_back(2);
    input.push_back(3);
    input.push_back(5);
    input.push_back(7);
    input.push_back(2);
    input.push_back(2);
    //for sorting the vector in descending order(it wont work for unsorted one)
    sort(input.begin(), input.end(), greater<int>());
    input.erase(unique(input.begin(), input.end()), input.end()); //will also work for ascending sorted vector
    
    for (auto &i : input)
        cout << i << " ";
}