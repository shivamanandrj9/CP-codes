#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> person;
    person["ram"] = 5;
    person["shyam"] = 3;
    person["lata"] = 3;

    person["ram"]++;
    for (auto it = person.begin(); it != person.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    for (auto it = person.begin(); it != person.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}