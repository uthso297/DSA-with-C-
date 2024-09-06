#include<iostream>

using namespace std;
int main(){
    int n;

    cout << "Enter your number: ";
    cin >> n;
    if(n%2==0){
        cout << "Number " << n << " is even";
    }
    else{
        cout << "Number " << n << " is odd";
    }
    return 0;
}