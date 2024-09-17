#include <iostream>
using namespace std;

int binToDec(int binNumber)
{
    int ans = 0, pow = 1;

    while (binNumber > 0)
    {
        int rem = binNumber % 10;
        ans += rem * pow;

        binNumber /= 10;
        pow *= 2;
    }

    return ans;
}
int main()
{

    cout << binToDec(101) << endl;
    return 0;
}