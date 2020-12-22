#include <iostream>
using namespace std;
int main()
{
    int arr[10], n, i, key;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> key;
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found" << endl;
            break;
        }
        else
            cout << "Element not found" << endl;
        break;
    }
}