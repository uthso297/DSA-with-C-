#include <iostream>
using namespace std;
int factN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int result = factN(10);
    cout << result << endl;

    return 0;
}