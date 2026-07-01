#include <iostream>
#include <string>
using namespace std;

const int MAX = 50;
int main()
{
    // q1
    int choice;
    double num1, num2;

    while (true)
    {
        cout << "\n--- Menu-Driven Calculator ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5)
        {
            cout << "Exiting calculator engine.\n";
            break;
        }

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        if (choice == 1)
        {
            cout << "Result: " << (num1 + num2) << "\n";
        }
        else if (choice == 2)
        {
            cout << "Result: " << (num1 - num2) << "\n";
        }
        else if (choice == 3)
        {
            cout << "Result: " << (num1 * num2) << "\n";
        }
        else if (choice == 4)
        {
            if (num2 == 0)
            {
                cout << "Error: Division by zero is undefined.\n";
            }
            else
            {
                cout << "Result: " << (num1 / num2) << "\n";
            }
        }
        else
        {
            cout << "Invalid operation selection.\n";
        }
    }

    // q2
    int arr[MAX];
    int n = 0;
    int choice;

    cout << "Enter initial number of elements in array: ";
    cin >> n;

    if (n > MAX || n < 0)
    {
        cout << "Invalid configuration size.\n";
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    while (true)
    {
        cout << "\n--- Menu Array Operations ---\n";
        cout << "1. Display Array\n";
        cout << "2. Find Maximum Element\n";
        cout << "3. Calculate Sum of Elements\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 4)
        {
            cout << "Exiting system.\n";
            break;
        }
        else if (choice == 1)
        {
            cout << "Current Array elements: ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "Array is completely empty.\n";
            }
            else
            {
                int maxVal = arr[0];
                for (int i = 1; i < n; i++)
                {
                    if (arr[i] > maxVal)
                    {
                        maxVal = arr[i];
                    }
                }
                cout << "Maximum Element: " << maxVal << "\n";
            }
        }
        else if (choice == 3)
        {
            int totalSum = 0;
            for (int i = 0; i < n; i++)
            {
                totalSum += arr[i];
            }
            cout << "Total Sum: " << totalSum << "\n";
        }
        else
        {
            cout << "Invalid operational parameters.\n";
        }
    }

    // q3
    string sourceStr;
    int choice;

    cout << "Enter primary baseline string: ";
    getline(cin, sourceStr);

    while (true)
    {
        cout << "\n--- Menu String System ---\n";
        cout << "1. Display String Length\n";
        cout << "2. Concatenate a New String\n";
        cout << "3. Reset Source String\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 4)
        {
            cout << "Closing text system.\n";
            break;
        }
        else if (choice == 1)
        {
            cout << "String Length metric: " << sourceStr.length() << " characters.\n";
        }
        else if (choice == 2)
        {
            string appendStr;
            cin.ignore();
            cout << "Enter string fragment to append: ";
            getline(cin, appendStr);
            sourceStr = sourceStr + appendStr;
            cout << "Concatenated result payload: " << sourceStr << "\n";
        }
        else if (choice == 3)
        {
            cin.ignore();
            cout << "Enter new replacement baseline string: ";
            getline(cin, sourceStr);
            cout << "String update verified successfully.\n";
        }
        else
        {
            cout << "Invalid text action selection.\n";
        }
    }

    // q4
    int itemIds[MAX];
    string itemNames[MAX];
    int itemStocks[MAX];
    int n;

    cout << "Enter item volume capacity to register: ";
    cin >> n;

    if (n > MAX || n < 1)
    {
        cout << "Invalid database configuration limits.\n";
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Item ID " << (i + 1) << ": ";
        cin >> itemIds[i];
        cin.ignore();
        cout << "Enter Item Name " << (i + 1) << ": ";
        getline(cin, itemNames[i]);
        cout << "Enter Available Stock Quantity: ";
        cin >> itemStocks[i];
    }

    cout << "\n--- Final Registered Inventory Manifest ---\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Item Code: " << itemIds[i] << " | Label: " << itemNames[i]
             << " | Inventory Stocks: " << itemStocks[i] << " units\n";
    }

    return 0;
}