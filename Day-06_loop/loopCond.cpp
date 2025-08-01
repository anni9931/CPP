#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two no:";
    cin >> a >> b;

    if (++a)
    {

        cout << a << endl;

    }
    else
    {
        cout << ++b << endl;
    }
}