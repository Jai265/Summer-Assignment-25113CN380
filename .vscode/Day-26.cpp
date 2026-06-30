#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Q101 Write a program to Create number guessing game.
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100.\n";

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber)
        {
            cout << "Too high! 📉 Try again.\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Too low! 📈 Try again.\n";
        }
        else
        {
            cout << "Correct! You guessed it in " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    // Q102 Write a program to Create voting eligibility system.
    int age;
    cout << "--------------------------------------------------------------------------------------------------" << endl;
    cout << "Welcome to voting eleigibilty system !" << endl;
    cout << "You must be above or equal to 18 years to vote !!" << endl;
    cout << "Please enter your age : ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible to vote sir !" << endl;
    }
    else
    {
        cout << "You are not eligible sir :( " << endl;
    }

    // Q103 Write a program to Create ATM simulation.
    cout << "--------------------------------------------------------------------------------------------------" << endl;
    int stored_pin = 5572;
    int login_pin, choice, balance = 1000, deposit, withdraw;

    cout << "Welcome to ATM !!" << endl;
    cout << "Please login to proceed further ! " << endl;
    cin >> login_pin;
    if (login_pin == stored_pin)
    {
        cout << "Login succesful" << endl;
        cout << endl;
        do
        {
            cout << "Press 1 to check balance" << endl;
            cout << "Press 2 to deposit" << endl;
            cout << "Press 3 to withdraw" << endl;
            cout << "Press 4 to exit" << endl;
            cout << endl;
            cout << "Enter input : ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Your balance is " << balance << " amount" << endl;
                break;

            case 2:
                cout << "Enter the amount to deposit : ";
                cin >> deposit;
                if (deposit > 0)
                {
                    balance += deposit;
                }
                else
                {
                    cout << "Invalid" << endl;
                }
                break;
            case 3:
                cout << "Enter amount to withdraw : ";
                cin >> withdraw;
                if (withdraw <= balance)
                {
                    balance -= withdraw;
                }
                else
                {
                    cout << "Invalid" << endl;
                }
                break;

            default:
                cout << endl;
                break;
            }

        } while (choice != 4);
        cout << "THANKS !" << endl;
    }
    else
    {
        cout << "Access denied!!" << endl;
    }

    // Q104 Write a program to Create quiz application.
    cout << "--------------------------------------------------------------------------------------------------" << endl;
    int x, score = 3, a, b, c;
    cout << "Welcome to a quiz app based on GK !!" << endl;
    cout << "There will be 3 questions in quiz and no negative marking!" << endl;
    cout << "If you are ready to proceed then press 1 if not then any number : ";
    cin >> x;
    if (x == 1)
    {
        cout << "Q1 What is the capital of INDIA ?? " << endl;
        cout << "1. New Dehli" << endl;
        cout << "2. Mumbai" << endl;
        cout << "3. Kolkata" << endl;
        cout << "Answer : ";
        cin >> a;
        if (a == 1)
        {
            cout << "Correct!" << endl;
            cout << endl;
        }
        else
        {
            score--;
            cout << "Not Correct!" << endl;
            cout << endl;
        }
        cout << "Q2 What is the Capital of Russia ?? " << endl;
        cout << "1. St. Peturburg" << endl;
        cout << "2. Moscow" << endl;
        cout << "3. Berlin" << endl;
        cout << "Answer : ";
        cin >> b;
        if (b == 2)
        {
            cout << "Correct!" << endl;
            cout << endl;
        }
        else
        {
            score--;
            cout << "Not Correct!" << endl;
            cout << endl;
        }
        cout << "Q3 What is the most sold Gun ?? " << endl;
        cout << "1. M4 16" << endl;
        cout << "2. Uzi" << endl;
        cout << "3. AK 47" << endl;
        cout << "Answer : ";
        cin >> c;
        if (c == 3)
        {
            cout << "Correct!" << endl;
            cout << endl;
        }
        else
        {
            score--;
            cout << "Not Correct!" << endl;
            cout << endl;
        }

        cout << "SCORE : " << score << endl;
    }
    else
    {
        cout << "Ok next time then!!" << endl;
    }

    return 0;
}