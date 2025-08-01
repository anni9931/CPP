#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string :";
    cin >> str;

    int left = 0;
    int right = str.length() - 1;
    bool isPalindrome = true;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome)
    {
        cout << "it is a Palindrome" << endl;
    }
    else
    {
        cout << "it is Not a palindrome" << endl;
        return 0;
    }
}