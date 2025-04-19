#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& arr, int key) {
    int n = arr.size();
    key = key % n; // Checking if key is greater than arr size
    
    vector<int> rotated(n);
    for (int i = 0; i < n; ++i) {
        rotated[(i + key) % n] = arr[i];
    }
    arr = rotated;

    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int key = 3;
    cout << "Rotated Array: ";
    rotate(arr, key);
    return 0;
}