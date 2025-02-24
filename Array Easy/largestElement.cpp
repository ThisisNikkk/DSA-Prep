#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }return max;
}
int smallest(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }return min;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest Element : "<< largest(arr, n) << endl;
    cout << "Smallest Element : "<< smallest(arr, n) << endl;
    return 0;
}