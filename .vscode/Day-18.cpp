#include <iostream>
using namespace std;
int main()
{
    // Q69 Write a program to Bubble sort.
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "Array after BUBBLE sort : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    // Q70 Write a program to Selection sort.
    int n1;
    cout << "Enter the size of array : ";
    cin >> n1;

    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    int min;
    for (int i = 0; i <= n1 - 2; i++)
    {
        min = i;
        for (int j = i; j <= n1 - 1; j++)
        {
            if (arr1[j] < arr1[min])
            {
                min = j;
            }
        }
        int temp = arr1[min];
        arr1[min] = arr1[i];
        arr1[i] = temp;
    }

    cout << "Array after SELECTION sort : " << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl
         << endl;

    // Q71 Write a program to Binary search.
    int n2, target;
    cout << "Enter the size of array and target : ";
    cin >> n2 >> target;

    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int beg = 0;
    int end = n2 - 1;
    int index = -1;
    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (arr2[mid] == target)
        {
            index = mid;
            break;
        }
        else if (arr2[mid] < target)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (index != -1)
    {
        cout << "Element found at " << index << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }
    cout << endl;

    // Q72 Write a program to Sort array in descending order.
    int n3;
    cout << "Enter the size of array : ";
    cin >> n3;

    int arr3[n3];
    for (int i = 0; i < n3; i++)
    {
        cin >> arr3[i];
    }

    int mx = 0;
    for (int i = 0; i <= n3 - 2; i++)
    {
        mx = i;
        for (int j = i; j <= n3 - 1; j++)
        {
            if (arr3[j] > arr3[mx])
            {
                mx = j;
            }
        }
        int temp = arr3[mx];
        arr3[mx] = arr3[i];
        arr3[i] = temp;
    }

    cout << "Array after reverse sort : " << endl;
    for (int i = 0; i < n3; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl
         << endl;

    return 0;
}