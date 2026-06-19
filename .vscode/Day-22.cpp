#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
    // Q85 Write a program to Check palindrome string.
    string str;
    cout << "Enter a string : ";
    cin >> str;
    int n = str.size();
    int strt = 0, end = n - 1;
    bool check = true;
    while (strt < end)
    {
        if (str[strt] != str[end])
        {
            check = false;
            break;
        }
        else
        {
            strt++;
            end--;
        }
    }
    if (check)
        cout << "Palindrome" << endl;
    else
        cout << "Not palindrome" << endl;

    // Q86 Write a program to Count words in a sentence.
    string str1;
    cout << "Enter a string : ";
    cin.ignore();
    getline(cin, str1);
    int words = 0;
    bool inWord = false;

    for (char ch : str1)
    {
        if (ch != ' ' && (!inWord))
        {
            words++;
            inWord = true;
        }
        else if (ch == ' ')
            inWord = false;
    }
    cout << "No. of words are : " << words << endl;

    // Q87 Write a program to Character frequency.
    string str2;
    cout << "Enter a string : ";
    cin.ignore();
    getline(cin, str2);

    map<char, int> freq;
    for (int i = 0; i < str2.size(); i++)
    {
        freq[str2[i]]++;
    }

    for (auto p : freq)
    {
        cout << p.first << " --> " << p.second << endl;
    }

    // Q88 Write a program to Remove spaces from string
    string str3;
    cout << "Enter a string : ";
    cin.ignore();
    getline(cin, str3);

    vector<char> answer;
    for (int i = 0; i < str3.size(); i++)
    {
        if (str3[i] != ' ')
        {
            answer.push_back(str3[i]);
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
    }
    return 0;
}