#include <iostream>
#include <algorithm>
#include <numeric>
#include <set>
#include <deque>
#include <map>
#include <cmath>
#include <vector>
#include <cstring>
#include <iomanip>

using namespace std;

#define int long long

const int mod = 1000000007;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    multiset<int> m = {1, 2, 2, 3, 1, 4, 5, 3, 2, 1, 4};
    for (auto &i : m)
        cout << i << " ";
    
    cout<<endl;
    
    m.erase(m.find(2)); //will only one of the 2

    m.erase(2);  //will erase all the 2

    auto itr=m.lower_bound(2);   //lower_bound return karta hai us number ka pointer jo ki either us number se bada hota hai ya phir uske barabar
    return 0;
}