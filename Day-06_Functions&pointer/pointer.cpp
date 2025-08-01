#include <iostream>
using namespace std;

int main()
{
    int a = 66;
    int *b = &a;
    int **c = &b;

    cout << "The address of a is: " << a << endl;
    cout << "The address of a is: " << b << endl;
    cout << "The address at a is :" << *b << endl;
    cout << "The value at address c is :" << *c << endl;
    cout << "The value of c is :" << c << endl;

    return 0;
}