#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1]) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    cout << "After Sorting: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {1, 5, 7, 3, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    insertionSort(arr, n);
    return 0;
}