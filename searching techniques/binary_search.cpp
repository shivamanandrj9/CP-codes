
#include <bits/stdc++.h>
using namespace std;


int bs(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		
		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return bs(arr, l, mid - 1, x);

		
		return bs(arr, mid + 1, r, x);
	}

	
	return -1;
}

int main(void)
{

    int arr[10]={1,4,5,2,3,1,4,8,2,6};
    sort(arr,arr+10);
    cout<<bs(arr,0,9,5);
    

	return 0;
}
