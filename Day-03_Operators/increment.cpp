#include <iostream>
using namespace std;

// increment and decrement operator.
void increment()
{
    int a = 7;
    cout << "The value of a++ :" << a++ << endl;
    cout << a << endl;
    cout << "The value of --a :" << --a << endl;
    cout << a++ << endl;
    cout << --a << endl;
}

int main()
{
    increment();
    cout << endl;
}