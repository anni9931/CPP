#include <iostream>
using namespace std;

// this program prints a square form of pattern of characters
// int main()
// {
//     int n;
//     cout << "Enter the no of rows:";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << char(i + 64) << " ";
//         }
//         cout << endl;
//     }
// }

// // Countinf form of characters
// int main()
// {
//     int n;
//     cout << "Enter the no of rows or column :";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << char(i + 64 + j - 1) << " ";
//         }
//         cout << endl;
//     }
// }

// this code use while loop
// int main()
// {
//     int row, col;
//     cout << "Enter the no of rows and column :";
//     cin >> row;
//     cin >> col;

//     int i = 1;
//     char updatechar = char(i + 64);

//     while (i <= row)
//     {
//         int j = 1;
//         while (j <= col)
//         {
//             cout << updatechar << " ";
//             updatechar++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// Reverse character triangle pattern
int main()
{
    int n;
    cout << "Enter no of columns :";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << char('A' + n + j - 1-i) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}