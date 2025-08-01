#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter triangle sides a, b, c:";
    cin >> a >> b >> c;

    if ((b + c) > a || ((a + c) > b) || ((a + b) > c))
    {
        cout << "it is valid triangle" << endl;
    }
    else
    {
        cout << "it is invalied triangle" << endl;
    }
}