/*
How many lines you want?
3
1
12
123
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
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << "";
        }
        cout << endl;
    }

    return 0;
}