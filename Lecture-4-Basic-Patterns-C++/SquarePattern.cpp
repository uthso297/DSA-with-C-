/*
Enter how many lines you want: 3
1 2 3
1 2 3
1 2 3
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter how many lines you want: ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}