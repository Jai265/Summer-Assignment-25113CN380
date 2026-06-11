#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    // Q53 Write a program to Linear search.
    int n, target;
    cout << "Enter the size of the array and element to be searched : ";
    cin >> n >> target;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    bool found = false;
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            found = true;
            pos = i + 1;
            break;
        }
    }
    if (found == true)
    {
        cout << "Found element at " << pos << endl;
    }
    else
    {
        cout << "Search unsuccesful" << endl;
    }

    // Q54 Write a program to Frequency of an element.
    int n1;
    cout << "Enter the size of array : ";
    cin >> n1;
    vector<int> nums1(n1);

    for (int i = 0; i < n1; i++)
    {
        cin >> nums1[i];
    }

    map<int, int> freq;
    for (int i = 0; i < n1; i++)
    {
        freq[nums1[i]]++;
    }
    for (auto p : freq)
    {
        cout << p.first << " --> " << p.second << endl;
    }

    // Q55 Write a program to Second largest element.
    int n2;
    cout << "Enter the size of array : ";
    cin >> n2;
    vector<int> nums2(n2);

    for (int i = 0; i < n2; i++)
    {
        cin >> nums2[i];
    }

    int max1 = 0, max2 = 0;
    for (int i = 0; i < n2; i++)
    {
        if (nums2[i] > max1)
        {
            max2 = max1;
            max1 = nums2[i];
        }
    }
    cout << "First largest " << "--> " << max1 << endl;
    cout << "Second largest " << "--> " << max2 << endl;

    // Q56 Write a program to Find duplicates in array.
    int n3;
    cout << "Enter the size of array : ";
    cin >> n3;
    vector<int> nums3(n3);

    for (int i = 0; i < n3; i++)
    {
        cin >> nums3[i];
    }

    map<int, int> freq1;
    for (int i = 0; i < n3; i++)
    {
        freq1[nums3[i]]++;
    }
    for (auto p : freq1)
    {
        if (p.second > 1)
        {
            cout << p.first << endl;
        }
    }
    return 0;
}