#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two no for bitwise operator:";
    int a, b;
    cin >> a >> b;

    cout << "Bitwise AND:" << (a & b) << endl;
    cout << "Bitwise OR:" << (a | b) << endl;
    cout << "Bitwise XOR:" << (a ^ b) << endl;
    cout << "Bitwise NOT of a:" << (~a) << endl;
    cout << "Bitwise NOT of b:" << (~b) << endl;
    cout << "Left shift of a by 2:" << (a << 2) << endl;
    cout << "Left shift of b by 2:" << (b << 2) << endl;
    cout << "Right shift of a by 2:" << (a >> 2) << endl;
    cout << "Right shift of b by 2:" << (b >> 2) << endl;
}