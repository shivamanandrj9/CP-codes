
#include <iostream>
using namespace std;

int near(int arr[], int target, int start, int end)
{

	int ans = -1;
	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (arr[mid] == target)
		{
			return mid;
		}
		else if (arr[mid] < target)
			start = mid + 1;

		else
		{
			ans = mid;
			end = mid - 1;
		}
	}

	return ans;
}

int main()
{
	int arr[] = {1, 2, 3, 5, 8, 8, 8, 12};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << near(arr, 8, 4, n);
	return 0;
}
