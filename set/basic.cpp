#include <iostream>
#include <algorithm>
#include <numeric>
#include <set>
#include <deque>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<int> s = {1, 2, 5, 6, 3, 1, 4, 5, 2, 3};
    s.insert(5);
    s.insert(6);
    for (auto &i : s)
        cout << i << " ";
    cout << endl;
    //copying to another set

    set<int> s2(s.begin(), s.end());
    for (auto &i : s2)
        cout << i << " ";
    cout << endl;

    //erasing an element

    s2.erase(5);
    for (auto &i : s2)
        cout << i << " ";
    cout << endl;

    // s2.erase(s2.begin(),s2.find(4));
    // for (auto &i : s2)
    //     cout << i << " ";
    // cout << endl;

    return 0;
}