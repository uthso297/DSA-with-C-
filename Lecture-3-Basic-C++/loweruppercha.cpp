#include <iostream>

using namespace std;
int main()
{
    char ch;
    cout << "Enter your character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    { // alternative ch>=97 && ch<=122
        cout << ch << " is lowercase character";
    }

    else
    {
        cout << ch << " is uppercase character";
    }
    return 0;
}