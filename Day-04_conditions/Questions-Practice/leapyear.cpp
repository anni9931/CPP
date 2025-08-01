#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a year";
    int leapyear;
    cin >> leapyear;

    if (leapyear % 400 == 0)
    {
        cout << "it is a leapyear" << endl;
    }
    else if (leapyear % 4 == 0 && leapyear % 100 != 0)
    {
        cout << "it is a leapyear" << endl;
    }
    else
    {
        cout << "it is not a leap year" << endl;
    }


}