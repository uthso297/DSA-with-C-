/*
Enter how many lines you want: 3
123
456
789
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter how many lines you want: ";
    int n;
    cin >> n;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}