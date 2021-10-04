#include <iostream>
using namespace std;

void sort(int input[], int a)
{
    int b, c, d;
    for (b = 1; b < a; b++)
    {
        for (c = 0; c < a - b; c++)
        {
            if (input[c] > input[c + 1])
            {
                d = input[c];
                input[c] = input[c + 1];
                input[c + 1] = d;
            }
        }
    }
}
int main()
{
    int input[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> input[i];
    }

    sort(input, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << input[i];
    }

    return 0;
}