#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{

    // q1
    Student s[100];
    int n = 0, choice;

    do
    {
        cout << "\n1.Add Student\n2.Display Students\n3.Search Student\n4.Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Roll: ";
            cin >> s[n].roll;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, s[n].name);
            cout << "Enter Marks: ";
            cin >> s[n].marks;
            n++;
            break;

        case 2:
            for (int i = 0; i < n; i++)
            {
                cout << "\nRoll: " << s[i].roll;
                cout << "\nName: " << s[i].name;
                cout << "\nMarks: " << s[i].marks << endl;
            }
            break;

        case 3:
            int roll;
            cout << "Enter Roll Number: ";
            cin >> roll;
            for (int i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    cout << "Name: " << s[i].name << endl;
                    cout << "Marks: " << s[i].marks << endl;
                }
            }
            break;
        }
    } while (choice != 4);

    // q2
    Employee e[100];
    int n = 0, choice;

    do
    {
        cout << "\n1.Add Employee\n2.Display Employees\n3.Search Employee\n4.Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter ID: ";
            cin >> e[n].id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, e[n].name);
            cout << "Enter Salary: ";
            cin >> e[n].salary;
            n++;
            break;

        case 2:
            for (int i = 0; i < n; i++)
            {
                cout << "\nID: " << e[i].id;
                cout << "\nName: " << e[i].name;
                cout << "\nSalary: " << e[i].salary << endl;
            }
            break;

        case 3:
            int id;
            cout << "Enter ID: ";
            cin >> id;
            for (int i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    cout << "Name: " << e[i].name << endl;
                    cout << "Salary: " << e[i].salary << endl;
                }
            }
            break;
        }
    } while (choice != 4);

    // Q3
    string name;
    float basic, hra, da, gross;

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;

    cout << "\nEmployee Name: " << name;
    cout << "\nBasic Salary: " << basic;
    cout << "\nHRA: " << hra;
    cout << "\nDA: " << da;
    cout << "\nGross Salary: " << gross;

    // Q4
    string name1;
    int roll1;
    float m1, m2, m3, m4, m5, total, per;

    cout << "Enter Name: ";
    getline(cin, name1);

    cout << "Enter Roll Number: ";
    cin >> roll1;

    cout << "Enter Marks of 5 Subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    per = total / 5;

    cout << "\n----- Marksheet -----";
    cout << "\nName: " << name1;
    cout << "\nRoll No: " << roll1;
    cout << "\nTotal Marks: " << total;
    cout << "\nPercentage: " << per << "%";

    if (per >= 90)
        cout << "\nGrade: A+";
    else if (per >= 75)
        cout << "\nGrade: A";
    else if (per >= 60)
        cout << "\nGrade: B";
    else if (per >= 40)
        cout << "\nGrade: C";
    else
        cout << "\nGrade: Fail";

    return 0;
}