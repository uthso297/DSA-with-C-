#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = a++; // post-increment
    cout << "b is: " << b << endl;
    cout << "After increment a is: " << a << endl;

    int c = 10;
    int d = ++c; // pre-increment
    cout << "d is: " << d << endl;
    cout << "After increment c is: " << c << endl;
}