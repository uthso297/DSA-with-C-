/*
How many lines you want?
5
1
23
456
78910
1112131415
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "How many lines you want?\n";
    int n;
    cin >> n;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1;j>0 ;j--)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}