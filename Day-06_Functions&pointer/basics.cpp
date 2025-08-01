#include <iostream>
using namespace std;

// print 1 to n function.

// int sumN(int n)
// {
//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

// int main()
// {
//     cout << sumN(5) << endl;
//     cout << sumN(10) << endl;
//     return 0;
// }

// Memory checked pass by value

#include <iostream>
using namespace std;

void update(int a) {
    a = a + 5;
    cout << "Inside function: " << a << endl;
}

int main() {
    int x = 10;
    update(x);
    cout << "Outside function: " << x << endl;
    return 0;
}
