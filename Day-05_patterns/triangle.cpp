

#include <iostream>
using namespace std;

// This program prints a square pattern of numbers

// int main()
// {
//     int n;
//     cout << "Enter the number of rows:";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << j<<" ";
//             j = j + 1;
//         }
//         cout << endl;
//         i++;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the no of rows or colmn :";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i - j + 1 << " ";
//         }

//         cout << endl;
//     }
// }

// Triangle character pattern
int main()
{
    int n;
    cout << "Enter the no of rows or column :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(i + 64) << " ";
        }
        cout << endl;
    }
}