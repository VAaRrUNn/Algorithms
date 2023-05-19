#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int k)
{

    priority_queue<int> pq;

    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    for (int i = k; i < n; i++)
    {

        if (arr[i] < pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
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
    int k;
    cout << "Enter value of K: ";
    cin >> k;
    int ans = solve(arr, n, k);
    cout << "The (min)ans -> " << ans << "\n";
    return 0;
}