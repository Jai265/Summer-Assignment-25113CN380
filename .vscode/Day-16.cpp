#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // Q61 Write a program to Find missing number in array.
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }

    int act_sum = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        act_sum += i;
    }
    cout << "Missing number : " << act_sum - sum << endl;

    // Q62 Write a program to Find maximum frequency element.
    int n1;
    cout << "Enter the size of the array : ";
    cin >> n1;

    vector<int> nums1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> nums1[i];
    }

    int max_freq = 0;
    int ans = -1;
    for (int i = 0; i < n1; i++)
    {
        int count = 0;
        for (int j = 0; j < n1; j++)
        {
            if (nums1[i] == nums1[j])
            {
                count++;
            }
        }
        if (count > max_freq)
        {
            max_freq = count;
            ans = nums1[i];
        }
    }
    cout << "Element with max frequency is : " << ans << endl;

    // Q63 Write a program to Find pair with given sum.
    int n2, sum1;
    cout << "Enter the size of the array and sum : ";
    cin >> n2 >> sum1;

    vector<int> nums2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> nums2[i];
    }

    vector<int> answer;
    for (int i = 0; i < n2; i++)
    {
        for (int j = i + 1; j < n2; j++)
        {
            if (nums2[i] + nums2[j] == sum1)
            {
                answer.push_back(nums2[i]);
                answer.push_back(nums2[j]);
            }
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    cout << endl;

    // Q64 Write a program to Remove duplicates from array.
    int n3;
    cout << "Enter the size of the array : ";
    cin >> n3;

    vector<int> nums3(n3);
    for (int i = 0; i < n3; i++)
    {
        cin >> nums3[i];
    }

    for (int i = 0; i < n3; i++)
    {
        bool isDuplicate = false;

        for (int j = 0; j < i; j++)
        {
            if (nums3[i] == nums3[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate)
        {
            cout << nums3[i] << " ";
        }
    }

    return 0;
}