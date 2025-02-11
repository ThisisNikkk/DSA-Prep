#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// int reverseArray(int arr[], int n){
//     int ans[n];
//     for(int i = n-1; i>=0; i--){
//         ans[n-i-1] = arr[i];
//     }
//     printArray(ans,n);
// }

int reverseArray(int arr[], int start, int end){
    if(start<end){
        swap(arr[start],arr[end]);
        reverseArray(arr, start+1, end-1);
    }

}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,0,n-1);
    printArray(arr,n);
}