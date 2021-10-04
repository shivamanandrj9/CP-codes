/*
सरस्वति महाभागे विद्ये कमललोचने |
विद्यारूपे विशालाक्षि विद्यां देहि नमोऽस्तु ते ||
*/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <cmath>
#include <vector>
#include <cstring>
#include <iomanip>
#include <climits>

using namespace std;

#define int long long
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define qi queue<int>
#define mii map<int, int>
#define pii pair<int, int>
#define mip map<int, pair<int, int>>
#define FOR(i, k, n) for (int i = k; i < n; i++)
#define double long double
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define get(a)        \
    for (auto &i : a) \
    cin >> i
#define put(a)        \
    for (auto &i : a) \
    cout << i << " "
#define endl "\n"
#define sp << " " <<
#define P(x) cout << x << endl

const int mod = 1000000007;
const int INF = 0x3f3f3f3f;

int arr[200005], seg[4 * 200005];

//low and high are for given array
//l and r are queries ranges(0 based index)
//ind is index of segmentation array
void build(int ind, int low, int high)
{
    if (low == high)
    {
        seg[ind] = arr[low];
        return;
    }
    int mid = (low + high) / 2;
    build(2 * ind + 1, low, mid);
    build(2 * ind + 2, mid + 1, high);
    seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
}

int query(int ind, int low, int high, int l, int r)
{
    if (low >= l && high <= r)
    {
        return seg[ind];
    }
    if (high < l || low > r)
        return 0;
    int mid = (low + high) / 2;
    int left = query(2 * ind + 1, low, mid, l, r);
    int right = query(2 * ind + 2, mid + 1, high, l, r);
    return left + right;
}

void pointupdate(int ind, int low, int high, int node, int val) //val of node increased by val
{
    if (low == high)
    {
        seg[ind] = val;
    }
    else
    {
        int mid = low + (high - low) / 2;
        if (node <= mid && node >= low)
        {
            pointupdate(2 * ind + 1, low, mid, node, val);
        }
        else
        {
            pointupdate(2 * ind + 2, mid + 1, high, node, val);
        }

        seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
    }
}

int lazy[4 * 200001];
void rangeupdate(int ind, int low, int high, int l, int r, int val)
{
    if (lazy[ind] != 0)
    {
        seg[ind] += (high - low + 1) * lazy[ind]; //done the required operation and updated the seg by help of lazy
        if (low != high)                          //if child not leaf node then updated the lazy of its child
        {
            lazy[2 * ind + 1] += lazy[ind];
            lazy[2 * ind + 2] += lazy[ind];
        }
        lazy[ind] = 0;
    }

    if (r < low || l > high || low > high)
    {
        return;
    }
    if (low >= 1 && high <= r)
    {
        seg[ind] += (high - low + 1) * val; //same operation
        if (low != high)
        {
            lazy[2 * ind + 1] += lazy[ind];
            lazy[2 * ind + 2] += lazy[ind];
        }
        return;
    }
    int mid = (low + high) >> 1;
    rangeupdate(2 * ind + 1, low, mid, l, r, val);
    rangeupdate(2 * ind + 2, mid + 1, high, l, r, val);
    seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
}

int querysumlazy(int ind, int low, int high, int l, int r, int val)
{
    if (lazy[ind] != 0)
    {
        seg[ind] += (high - low + 1) * lazy[ind];  //operation
        if (low != high)
        {
            lazy[2 * ind + 1] += lazy[ind];
            lazy[2 * ind + 2] += lazy[ind];
        }
        lazy[ind] = 0;
    }

    if (r < low || l > high || low > high)
    {
        return 0;
    }
    if (low >= l && high <= r)
    {
        return seg[ind];
    }
    int mid = (low + high) >> 1;
    return querysumlazy(2 * ind + 1, low, mid, l, r, val)
             + querysumlazy(2 * ind + 2, mid + 1, high, l, r, val);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}