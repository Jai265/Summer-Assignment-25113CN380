#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Q73 Write a program to Add matrices.
    int r, c, r1, c1;
    cout << "Enter the row and column of both the matrices : ";
    cin >> r >> c >> r1 >> c1;
    vector<vector<int>> nums(r, vector<int>(c));
    vector<vector<int>> nums1(r1, vector<int>(c1));
    vector<vector<int>> nums2(r, vector<int>(c));

    if (r == r1 && c == c1)
    {
        cout << "Addition is possible!" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> nums[i][j];
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> nums1[i][j];
            }
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                nums2[i][j] = nums[i][j] + nums1[i][j];
            }
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << nums2[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Addition not possible!" << endl;
    }
    cout << endl;

    // Q74 WAP to subtract matrices
    int r2, c2, r3, c3;
    cout << "Enter the row and column of both the matrices : ";
    cin >> r2 >> c2 >> r3 >> c3;
    vector<vector<int>> nums3(r2, vector<int>(c2));
    vector<vector<int>> nums4(r3, vector<int>(c3));
    vector<vector<int>> nums5(r2, vector<int>(c2));

    if (r2 == r3 && c2 == c3)
    {
        cout << "Subtraction is possible!" << endl;
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cin >> nums3[i][j];
            }
        }
        for (int i = 0; i < r3; i++)
        {
            for (int j = 0; j < c3; j++)
            {
                cin >> nums4[i][j];
            }
        }

        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                nums5[i][j] = abs(nums3[i][j] - nums4[i][j]);
            }
        }

        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << nums5[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Subtraction not possible!" << endl;
    }
    cout << endl;

    // Q75 Write a program to Transpose matrix.
    int r4, c4;
    cout << "Enter the row and column of the matrice : ";
    cin >> r4 >> c4;
    vector<vector<int>> nums6(r4, vector<int>(c4));

    for (int i = 0; i < r4; i++)
    {
        for (int j = 0; j < c4; j++)
        {
            cin >> nums6[i][j];
        }
    }

    cout << "Transpose : -" << endl;
    for (int i = 0; i < r4; i++)
    {
        for (int j = 0; j < c4; j++)
        {
            cout << nums6[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Q76 Write a program to Find diagonal sum.
    int r5, c5;
    cout << "Enter the row and column of the matrice : ";
    cin >> r5 >> c5;
    vector<vector<int>> nums7(r5, vector<int>(c5));

    for (int i = 0; i < r5; i++)
    {
        for (int j = 0; j < c5; j++)
        {
            cin >> nums7[i][j];
        }
    }

    int rs = 0, ls = 0;
    for (int i = 0; i < r5; i++)
    {
        for (int j = 0; j < c5; j++)
        {
            if (i == j)
            {
                rs += nums7[i][j];
            }
        }
    }

    for (int i = 0; i < r5; i++)
    {
        for (int j = 0; j < c5; j++)
        {
            if (i + j == r5 - 1)
            {
                ls += nums7[i][j];
            }
        }
    }

    cout << "Right diagonal sum is : - " << rs << endl;

    cout << "Left diagonal sum is : - " << ls << endl;
    return 0;
}