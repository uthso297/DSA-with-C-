#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "The number is prime number";
    }
    else
    {
        cout << "The number is not prime number";
    }
    return 0;
}