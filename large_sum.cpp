#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string a = "326";
    string b = "569";
    int len1 = a.size();
    int len2 = b.size();
    vector<int> multiply;
    int carry = 0;
    for (int i = len1 - 1; i >= 0; i--)
    {
        for (int j = len2 - 1; j >= 0; j--)
        {
            int temp = ((a[i] - '0') * (b[j] - '0')) + carry;
            cout<<temp<<endl;
            multiply.push_back(temp%10);
            carry = temp / 10;
            cout<<carry<<endl;
            for (int k = 0; k < multiply.size(); k++)
            {
                cout << multiply[k];
            }
            cout<<endl;
            
        }
    }
}