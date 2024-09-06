/*Implicit --> small data type will be stored in big data type..ex:float to double...as we know float take 4 bytes and double 8 bytes*/
#include <iostream>
using namespace std;

int main()
{
    char grade = 'A';

    int value = grade;
    cout << value << endl;
}