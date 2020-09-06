#include <iostream>
using namespace std;
int main()
{
    string str, str1, str2;
    getline(cin, str);
    str1 = str;

    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
    str2 = str;

    if (str1 == str2)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
}