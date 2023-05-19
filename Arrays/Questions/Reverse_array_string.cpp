#include <bits/stdc++.h>
using namespace std;

// APPROACH:
// Swap last and first elemnt -> 2nd and 2nd last -> ...
void reverse_(int arr[], int n)
{
    // arr -> array
    // n -> size of array.

    // better is to no use division here just use i, and j then i++, j-- in the loop
    // if you do n/2 in the loop it gets recalculated every time the loop runs, which will cause it to take more time (slightly but still)
    int e = n / 2;
    for (int i = 0; i < e; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}

void print(int arr[], int n)
{
    cout << "The array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int n;
    cout << "Enter the size of array: \n";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before\n";
    print(arr, n);
    cout << "After\n";
    reverse_(arr, n);
    print(arr, n);
    return 0;
}