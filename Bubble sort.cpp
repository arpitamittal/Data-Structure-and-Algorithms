#include <iostream>
using namespace std;
int bubblesort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10], i, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubblesort(arr, n);
}