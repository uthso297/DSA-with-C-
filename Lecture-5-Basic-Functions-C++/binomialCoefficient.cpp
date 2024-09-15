/*
nCr = n!/r!(n-r)!
*/

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

int nCr(int n, int r)
{
    int fact_n = factN(n);
    int fact_r = factN(r);
    int fact_nMr = factN(n - r);

    return fact_n / (fact_r * fact_nMr);
}
int main()
{
    int n = 8, r = 2;

    cout << nCr(n, r) << endl;

    return 0;
}