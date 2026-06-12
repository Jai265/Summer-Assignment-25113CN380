#include <iostream>
using namespace std;
int main()
{
    // Q57 Write a program to Reverse array.
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Q58 Write a program to Rotate array left.
    int n1;
    cout << "Enter the size of array : ";
    cin >> n1;
    int arr1[n1];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    int temp = arr1[0];

    for (int i = 1; i < n1; i++)
    {
        arr1[i - 1] = arr1[i];
    }
    arr1[n1 - 1] = temp;
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Q59 Write a program to Rotate array right.
    int n2;
    cout << "Enter the size of array : ";
    cin >> n2;

    int arr2[n2];

    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int temp1 = arr2[n2 - 1];

    for (int i = n2 - 1; i > 0; i--)
    {
        arr2[i] = arr2[i - 1];
    }

    arr2[0] = temp1;

    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Q60 Write a program to Move zeroes to end.
    int n3;
    cout << "Enter the size of array : ";
    cin >> n3;

    int arr3[n3];

    for (int i = 0; i < n3; i++)
    {
        cin >> arr3[i];
    }

    for (int i = 0; i < n3; i++)
    {
        for (int j = i + 1; j < n3; j++)
        {
            if (arr3[i] == 0 && arr3[j] != 0)
            {
                int temp = arr3[j];
                arr3[j] = arr3[i];
                arr3[i] = temp;
            }
        }
    }

    for (int i = 0; i < n3; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}