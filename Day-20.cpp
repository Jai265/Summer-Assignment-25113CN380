#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Q77 Write a program to Multiply matrices.
    int r, c, r1, c1;
    cout << "Enter the row and column of both matrices : ";
    cin >> r >> c >> r1 >> c1;
    vector<vector<int>> nums(r, vector<int>(c));
    vector<vector<int>> nums1(r1, vector<int>(c1));
    vector<vector<int>> nums2(r, vector<int>(c1));

    if (c == r1)
    {
        cout << "Multiplication is possible!!\n"
             << endl;
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
            for (int j = 0; j < c1; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    nums2[i][j] += nums[i][k] * nums1[k][j];
                }
            }
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << nums2[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Multiplication is not possible !!" << endl;
    }

    // Q78 Write a program to Check symmetric matrix.
    int r2, c2;
    cout << "Enter the row and column of the square matrix : ";
    cin >> r2 >> c2;
    vector<vector<int>> nums3(r2, vector<int>(c2));

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> nums3[i][j];
        }
    }

    vector<vector<int>> nums4(r2, vector<int>(c2));
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            nums4[i][j] = nums3[j][i];
        }
    }

    bool check = true;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            if (nums4[i][j] != nums3[i][j])
            {
                check = false;
                break;
            }
        }
    }
    if (!check)
    {
        cout << "Not symmetric\n";
    }
    else
    {
        cout << "Symmetric\n";
    }

    // Q79 Write a program to Find row-wise sum.
    int r3, c3;
    cout << "Enter the row and column of the matrix : ";
    cin >> r3 >> c3;
    vector<vector<int>> nums5(r3, vector<int>(c3));

    for (int i = 0; i < r3; i++)
    {
        for (int j = 0; j < c3; j++)
        {
            cin >> nums5[i][j];
        }
    }

    for (int i = 0; i < r3; i++)
    {
        int row_sum = 0;
        for (int j = 0; j < c3; j++)
        {
            row_sum += nums5[i][j];
        }
        cout << row_sum << endl;
    }

    // Q80 Write a program to Find column-wise sum.
    int r4, c4;
    cout << "Enter the row and column of the matrix : ";
    cin >> r4 >> c4;
    vector<vector<int>> nums6(r4, vector<int>(c4));

    for (int i = 0; i < r4; i++)
    {
        for (int j = 0; j < c4; j++)
        {
            cin >> nums6[i][j];
        }
    }

    for (int i = 0; i < c4; i++)
    {
        int col_sum = 0;
        for (int j = 0; j < r4; j++)
        {
            col_sum += nums6[j][i];
        }
        cout << col_sum << endl;
    }

    return 0;
}