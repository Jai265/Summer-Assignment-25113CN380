#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int choice;

    cout << "\n1. Display Array";
    cout << "\n2. Find Sum and Average";
    cout << "\n3. Find Largest and Smallest Element";
    cout << "\n4. Count Even and Odd Elements";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {

    case 1:
        cout << "Array elements are: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        break;

    case 2:
    {
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        double average = (double)sum / n;

        cout << "Sum = " << sum << endl;
        cout << "Average = " << average;
        break;
    }

    case 3:
    {
        int largest = arr[0];
        int smallest = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }

            if (arr[i] < smallest)
            {
                smallest = arr[i];
            }
        }

        cout << "Largest element = " << largest << endl;
        cout << "Smallest element = " << smallest;
        break;
    }

    case 4:
    {
        int evenCount = 0;
        int oddCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }

        cout << "Even elements = " << evenCount << endl;
        cout << "Odd elements = " << oddCount;
        break;
    }

    default:
        cout << "Invalid Choice";
    }

    return 0;
}