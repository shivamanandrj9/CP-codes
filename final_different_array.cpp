#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int input[a];
    for (int i = 0; i < a; i++)
    {
        cin >> input[i];
    }
    int c = 0;
    sort(input, input + a);
    
    for (int i = 1; i < a; i++)
    {
        if (input[i - 1] < input[i])
        {
            c++;
        }
    }
    int output[c + 1];
    int i;
    int j = 0;
    for (i = 1; i < a; i++)
    {
        if (input[i - 1] < input[i])
        {
            output[j] = input[i - 1];
            j++;
        }
    }
    output[c] = input[i - 1];
    for(int i=0;i<c+1;i++)
    {
        cout<<output[i]<<" ";
    }
    return 0;
}