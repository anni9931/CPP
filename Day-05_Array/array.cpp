#include <iostream>
using namespace std;

int main()
{
    int marks[] = {45, 22, 87, 865};
    int mathMarks[4];
    mathMarks[0] = 888;
    mathMarks[1] = 81;
    mathMarks[2] = 88;
    mathMarks[3] = 288;

    // we can change the value of an array
    mathMarks[2] = 90;

    cout << mathMarks[2] << endl;

    return 0;
}
