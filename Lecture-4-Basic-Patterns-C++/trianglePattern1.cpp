/*
How many lines you want?
3
*
**
***
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "How many lines you want?\n";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}