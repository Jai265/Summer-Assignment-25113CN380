#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    // Q89 Write a program to Find first non-repeating character.
    string str;
    cout << "Enter a string : ";
    cin >> str;
    map<char, int> freq;

    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }

    for (auto p : freq)
    {
        if (p.second == 1)
        {
            cout << p.first << endl;
            break;
        }
    }

    // Q90 Write a program to Find first repeating character.
    string str1;
    cout << "Enter a string : ";
    cin >> str1;
    map<char, int> freq1;

    for (int i = 0; i < str1.length(); i++)
    {
        freq1[str1[i]]++;
    }

    for (auto p : freq1)
    {
        if (p.second > 1)
        {
            cout << p.first << endl;
            break;
        }
    }

    // Q91 Write a program to Check anagram strings.
    string str2, str3;
    cout << "Enter 2 strings : ";
    cin >> str2 >> str3;

    int count = str2.length();
    for (int i = 0; i < str2.length(); i++)
    {
        for (int j = 0; j < str3.length(); j++)
        {
            if (str2[i] == str3[j])
                count--;
        }
    }

    if (count == 0)
        cout << "ANAGRAM STRING \n";
    else
        cout << "NOT ANAGRAM\n";

    // Q92 Write a program to Find maximum occurring character.
    string str4;
    cout << "Enter a string : ";
    cin >> str4;

    map<char, int> freq2;

    for (int i = 0; i < str4.length(); i++)
    {
        freq2[str4[i]]++;
    }

    int max = 0;
    char max_c;
    for (auto p : freq2)
    {
        if (max < p.second)
        {
            max = p.second;
            max_c = p.first;
        }
    }

    cout << "Maximum occuring charecter is :: " << max_c << " with frequency :: " << max << endl;
    return 0;
}