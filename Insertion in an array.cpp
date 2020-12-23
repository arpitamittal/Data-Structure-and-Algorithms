#include <iostream>
using namespace std;
int main()
{
    int arr[10], n, i, pos, num;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> pos >> num;

    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num;
    cout << "New array is:" << endl;
    for (i = 0; i < n + 1; i++)
    {
        cout << arr[i] << endl;
    }
}