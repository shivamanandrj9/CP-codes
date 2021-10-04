int st[1000001][20];
 
void buildsparse(int arr[], int N)
{
	for (int i = 0; i < N; i++)
		st[i][0] = arr[i];
 
	for (int j = 1; j <= 20; j++)
		for (int i = 0; i + (1 << j) <= N; i++)
			st[i][j] = st[i][j - 1]+st[i + (1 << (j - 1))][j - 1];
}
 
//L and R are index location (0 based)
int query(int L, int R)
{
	// int j = log2(R - L + 1);
	// int minimum = min(st[L][j], st[R - (1 << j) + 1][j]);
	// return minimum;
	int sum=0;
	for (int j = 20; j >= 0; j--)
	{
		if ((1 << j) <= R - L + 1)
		{
			sum += st[L][j];
 
			L += 1 << j;
		}
	}
	return sum;
}