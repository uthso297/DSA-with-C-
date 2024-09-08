#include <iostream>
using namespace std;

int main()
{
    cout << "Enter how many lines do you want: ";
    int n;
    cin >> n;
    cout << "Enter how many star do you want in each line: ";
    int m;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}