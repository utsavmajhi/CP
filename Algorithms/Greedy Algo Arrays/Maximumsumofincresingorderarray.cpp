// Maximum sum of increasing order elements from n arrays
// Given n arrays of size m each. Find the maximum sum obtained by selecting a number from each array such that the elements selected from the i-th array are more than the element selected from (i-1)-th array. If maximum sum cannot be obtained then return 0.
//Solved
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter number of Rows and Colums" << endl;
    int R, C;

    cin >> R >> C;
    int a[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> a[i][j];
        }
    }
    // int maxsum=solve(a,R,C);
    int rmax = INT32_MIN;
    int rmin = INT32_MAX;
    int premax = INT32_MAX;
    int sum = 0;
    int check = 0;
    int premax2 = INT32_MAX;
    for (int i = (R - 1); i >= 0; i--)
    {
        for (int j = 0; j < C; j++)
        {
            if (premax2 > a[i][j])
            {
                rmax=max(rmax,a[i][j]);
                check = check + 1;
               
            }
          
        }
        premax2=rmax;
        if (check == 0)
        {
            cout << 0 << endl;
            return 0;
        }
        else
        {
            sum = sum + premax2;
            check = 0;
            premax2=rmax;
            
        }
        rmax = INT32_MIN;
       
    }
    cout << "MAX SUM: " << sum;
}
