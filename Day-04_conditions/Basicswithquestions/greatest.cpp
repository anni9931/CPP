#include <iostream>
using namespace std;

int main()
{
    int a = 9;
    int b = -98;
    int c = 90;

    if (a > b)
    {
        if (a > c)
        {
            cout << "a is greatest " << endl;
        }
        else
        {
            cout << "c is greatest " << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b is greatest" << endl;
        }
        else
        {
            cout << "c is greatest " << endl;
        }
    }
}
