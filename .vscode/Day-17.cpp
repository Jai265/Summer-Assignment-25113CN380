#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Q65 Write a program to Merge arrays.
    int n1, n2;
    cout << "Enter the sizes of two arrays : ";
    cin >> n1 >> n2;

    vector<int> nums1(n1);
    vector<int> nums2(n2);

    for (int i = 0; i < n1; i++)
    {
        cin >> nums1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> nums2[i];
    }

    int n3 = n1 + n2;
    vector<int> nums3;
    for (int i = 0; i < n1; i++)
    {
        nums3.push_back(nums1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        nums3.push_back(nums2[i]);
    }

    for (int i = 0; i < n3; i++)
    {
        cout << nums3[i] << " ";
    }
    cout << endl;

    // Q66 Write a program to Union of arrays.
    int n4, n5;
    cout << "Enter the sizes of two arrays : ";
    cin >> n4 >> n5;

    vector<int> nums4(n4);
    vector<int> nums5(n5);

    for (int i = 0; i < n4; i++)
    {
        cin >> nums4[i];
    }
    for (int i = 0; i < n5; i++)
    {
        cin >> nums5[i];
    }

    vector<int> unions;
    for (int i = 0; i < n4; i++)
    {
        unions.push_back(nums4[i]);
    }
    for (int i = 0; i < n5; i++)
    {
        bool found = false;
        for (int j = 0; j < unions.size(); j++)
        {
            if (unions[j] == nums5[i])
            {
                found = true;
                break;
            }
        }
        if (!found)
            unions.push_back(nums5[i]);
    }

    for (int i = 0; i < unions.size(); i++)
    {
        cout << unions[i] << " ";
    }
    cout << endl;

    // Q67 Write a program to Intersection of arrays.
    int n6, n7;
    cout << "Enter the sizes of two arrays : ";
    cin >> n6 >> n7;

    vector<int> nums6(n6);
    vector<int> nums7(n7);

    for (int i = 0; i < n6; i++)
    {
        cin >> nums6[i];
    }
    for (int i = 0; i < n7; i++)
    {
        cin >> nums7[i];
    }

    vector<int> intersec;

    for (int i = 0; i < n6; i++)
    {
        bool found = false;
        for (int j = 0; j < n7; j++)
        {
            if (nums7[j] == nums6[i])
            {
                found = true;
                break;
            }
        }
        if (found)
            intersec.push_back(nums6[i]);
    }

    for (int i = 0; i < intersec.size(); i++)
    {
        cout << intersec[i] << " ";
    }
    cout << endl;
    // Q68 Write a program to Find common elements. - SAME Solution as previous
    return 0;
}