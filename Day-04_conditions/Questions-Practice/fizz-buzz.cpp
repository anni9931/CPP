#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Here print 1 to 100 fizz and buzz statemetns";
    cin>>n;


    if (n % 3 == 0 && n % 5 == 0)
    {
        cout << "Fizzbuzz" << endl;
    }
    else if (n % 5 == 0)
    {
        cout << "Buzz" << endl;
    }
    else if (n % 3 == 0)
    {
        cout << "Fizz" << endl;
    }
    else
    {
        cout << "Not Fizz,Buzz and Fizzbuzz"<<endl;
    }
}