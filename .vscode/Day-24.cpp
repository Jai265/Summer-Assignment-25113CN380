#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Q94 Write a program to Compress a string.
    string str, ans;
    cout << "Enter a string : ";
    cin >> str;

    int i = 0;
    while (i < str.length())
    {
        char c = str[i];
        int j = i;
        int count = 0;

        while (j < str.length() && str[j] == c)
        {
            count++;
            j++;
        }

        ans.push_back(c);
        ans += to_string(count);

        i = j;
    }

    cout << "COMPRESSED STRING : " << ans << endl;

    // Q95 Write a program to Find longest word.
    string s;
    cin.ignore();
    getline(cin, s);

    string longest = "";
    string current = "";

    for (int i = 0; i <= s.length(); i++)
    {
        // If space or end of string → word ends
        if (s[i] == ' ' || s[i] == '\0')
        {
            if (current.length() > longest.length())
            {
                longest = current;
            }
            current = ""; // reset for next word
        }
        else
        {
            current += s[i]; // build current word
        }
    }

    cout << longest << endl;

    // Q96 Write a program to Remove duplicate characters.
    string s1, s2 = "";
    cin >> s1;

    for (int i = 0; i < s1.length(); i++)
    {
        bool found = false;

        for (int j = 0; j < s2.length(); j++)
        {
            if (s1[i] == s2[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            s2.push_back(s1[i]);
        }
    }

    cout << s2;
    return 0;
}