#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {2, 4, 7, 9, 44};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = n - 1, key = 9;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            cout << "The element is found at index " << mid << " and the value is " << arr[mid];
            return 0;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Element not found";

    return 0;

}
