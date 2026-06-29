#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // Q97 Write a program to Merge two sorted arrays.
    int x, y;
    cout << "Enter size of two arrays : ";
    cin >> x >> y;

    vector<int> a(x);
    vector<int> b(y);

    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < b.size(); i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0;
    vector<int> result;

    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            result.push_back(a[i]);
            i++;
        }
        else
        {
            result.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size())
    {
        result.push_back(a[i]);
        i++;
    }

    while (j < b.size())
    {
        result.push_back(b[j]);
        j++;
    }

    cout << "MERGED ARRAY : " << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    // Q98 Write a program to Find common characters in strings.
    string s;
    cout << "Enter a string : ";
    cin.ignore();
    getline(cin, s);

    vector<char> answer;

    for (int i = 0; i < s.length(); i++)
    {
        bool check = false;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[i] == s[j] && i != j)
            {
                check = true;
                break;
            }
        }
        if (check)
        {
            bool alreadyAdded = false;
            for (char c : answer)
            {
                if (c == s[i])
                {
                    alreadyAdded = true;
                    break;
                }
            }

            if (!alreadyAdded)
            {
                answer.push_back(s[i]);
            }
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;

    // Q99 Write a program to Sort names alphabetically.
    int n;
    cout << "Enter size of string array : ";
    cin >> n;

    vector<string> words(n);

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    sort(words.begin(), words.end());

    for (int i = 0; i < n; i++)
    {
        cout << words[i] << " ";
    }
    cout << endl;

    // Q100 Write a program to Sort words by length.
    int n1;
    cout << "Enter size of string array : ";
    cin >> n1;

    vector<string> words1(n1);

    for (int i = 0; i < n1; i++)
    {
        cin >> words1[i];
    }

    sort(words1.begin(), words1.end(), [](string a, string b)
         { return a.size() < b.size(); });

    for (int i = 0; i < n1; i++)
    {
        cout << words1[i] << " ";
    }
    cout << endl;
    return 0;
}