#include <iostream>
using namespace std;

// sum of n no.
int main()
{
    cout << "Enter n no till sum ";
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}