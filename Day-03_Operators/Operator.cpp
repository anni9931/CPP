#include <iostream>
using namespace std;

// int main()
// {
//     int cups;
//     double pricePercup, totalPrice, discountedPrices;

//     cout << "Enter the number of tea cups ";
//     cin >> cups;
//     cout << "Enter the price per cups :";
//     cin >> pricePercup;

//     totalPrice = cups * pricePercup;

//     // apply 5% discount if total price is above 100 rs.

//     if (totalPrice >= 100)
//     {
//         discountedPrices = totalPrice - (totalPrice * 0.05);
//         cout << "Discounted price is :" << discountedPrices << endl;
//     }
//     else
//     {
//         cout << "Total price is " << discountedPrices << endl;
//     }

//     return 0;
// }

int main()
{
    // int a;
    // cin >> a;

    // if (a > 0)
    // {
    //     cout << "A is Positive " << endl;
    // }
    // else
    // {
    //     cout << "A is negative " << endl;
    // }

    char Ascii;
    cout << "Enter an alphabet which upper and lower case and digit ";
    cin >> Ascii;
    int AsNo = (int)Ascii;

    if (AsNo >= 97 && AsNo < 124)
    {
        cout << "it is a lower case letter" << endl;
    }
    else if (AsNo >= 65 && AsNo < 92)
    {
        cout << Ascii << "it is a upper case letter" << endl;
    }
    else if (AsNo >= 48 && AsNo < 58)
    {
        cout  << "it is a digit" << endl;
    }
    
}
