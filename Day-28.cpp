#include <iostream>
#include <string>
using namespace std;

const int MAX = 50;

int main()
{
    // Q1
    int n;
    int bookIds[MAX];
    string titles[MAX];
    bool isIssued[MAX];

    cout << "Enter number of books to add to library ";
    cin >> n;

    if (n < 1 || n > MAX)
    {
        cout << "Invalid size entry.";
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Book ID " << (i + 1) << " ";
        cin >> bookIds[i];
        cin.ignore(); // Clear buffer before reading string text

        cout << "Enter Book Title " << (i + 1) << " ";
        getline(cin, titles[i]);

        // Defaulting all new system entries to available (not issued)
        isIssued[i] = false;
    }

    cout << "\n--- Current Library Inventory System ---\n";
    for (int i = 0; i < n; i++)
    {
        cout << "ID: " << bookIds[i] << " | Title: " << titles[i]
             << " | Status: " << (isIssued[i] ? "Issued" : "Available") << endl;
    }

    // Q2
    int n1;
    int accountNumbers[MAX];
    string customerNames[MAX];
    double accountBalances[MAX];

    cout << "Enter number of bank accounts to initialize ";
    cin >> n1;

    if (n1 < 1 || n1 > MAX)
    {
        cout << "Invalid size entry.";
        return 1;
    }

    for (int i = 0; i < n1; i++)
    {
        cout << "Enter Account Number " << (i + 1) << " ";
        cin >> accountNumbers[i];
        cin.ignore();

        cout << "Enter Customer Name " << (i + 1) << " ";
        getline(cin, customerNames[i]);

        cout << "Enter Initial Balance for " << customerNames[i] << " ";
        cin >> accountBalances[i];
    }

    cout << "\n--- Bank Core Account Ledger ---\n";
    for (int i = 0; i < n1; i++)
    {
        cout << "Acc No: " << accountNumbers[i] << " | Customer: " << customerNames[i]
             << " | Balance: Rs. " << accountBalances[i] << endl;
    }

    // q3
    int n2;
    int ticketIds[MAX];
    string movieNames[MAX];
    double ticketPrices[MAX];

    cout << "Enter number of tickets to issue ";
    cin >> n2;

    if (n2 < 1 || n2 > MAX)
    {
        cout << "Invalid size entry.";
        return 1;
    }

    for (int i = 0; i < n2; i++)
    {
        cout << "Enter Ticket ID " << (i + 1) << " ";
        cin >> ticketIds[i];
        cin.ignore();

        cout << "Enter Movie Name " << (i + 1) << " ";
        getline(cin, movieNames[i]);

        cout << "Enter Ticket Price ";
        cin >> ticketPrices[i];
    }

    cout << "\n--- Ticket Confirmation Counter ---\n";
    for (int i = 0; i < n2; i++)
    {
        cout << "Ticket ID: " << ticketIds[i] << " | Movie: " << movieNames[i]
             << " | Price: Rs. " << ticketPrices[i] << endl;
    }

    // q4
    int n3;
    string contactNames[MAX];
    string phoneNumbers[MAX];

    cout << "Enter number of contacts to save ";
    cin >> n3;

    if (n3 < 1 || n3 > MAX)
    {
        cout << "Invalid size entry.";
        return 1;
    }

    for (int i = 0; i < n3; i++)
    {
        cin.ignore();
        cout << "Enter Contact Name " << (i + 1) << " ";
        getline(cin, contactNames[i]);

        cout << "Enter Phone Number for " << contactNames[i] << " ";
        getline(cin, phoneNumbers[i]);
    }

    cout << "\n--- Contact Management Directory ---\n";
    for (int i = 0; i < n3; i++)
    {
        cout << "Name: " << contactNames[i] << " | Phone: " << phoneNumbers[i] << endl;
    }

    return 0;
}