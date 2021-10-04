#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> stud;
    stud.insert({1, 25});
    stud.insert({4, 63});

    auto var = stud.begin();
    cout << var->first;
}