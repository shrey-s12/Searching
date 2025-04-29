#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int s, int n)
{
    int f = 0;
    int l = s - 1;

    while (f <= l)
    {
        int mid = f + (l - f) / 2;

        if (arr[mid] == n)
            return true;

        if (n < arr[mid])
            l = mid - 1;
        else
            f = mid + 1;
    }

    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15};
    int s = sizeof(arr) / sizeof(arr[0]);

    int n;
    cout << "Enter the No.: ";
    cin >> n;

    bool res = binarySearch(arr, s, n);
    cout << (res ? "Element Found" : "Element Not Found");

    return 0;
}