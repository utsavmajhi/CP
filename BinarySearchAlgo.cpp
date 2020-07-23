#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void binarySearch(int arr[], int f, int n)
{
    sort(arr, arr + n);
    int mid = 0;
    int low = 0;
    int high = n;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (f == arr[mid])
        {
            cout << "Found at index:" << mid << endl;
            return;
        }
        else
        {
            if (f < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                if (f > arr[mid])
                {
                    low = mid + 1;
                }
            }
        }
    }
    cout << "Not found" << endl;
}
int main()
{

    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    int a[n];
    int f;
    cout << "Enter the number you want to search in array" << endl;
    cin >> f;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    binarySearch(a, f, n);
}