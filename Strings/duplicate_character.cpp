#include <iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int n = str.length(), i, j, count = 0;

    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i+1; j < n; j++)
        {
            if (str[i] == str[j] && str[i] !=' '){
               
                count++;
                str[j] = '0';
            }
        }
        if (count > 1 && str[i] != '0')
            cout << str[i]<<endl;
    }
}

