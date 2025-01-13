#include<iostream>
#include<algorithm>
using namespace std;


int sortedArray(int arr[], int n){
    sort(arr, arr + n);
}

int getMin(int arr[], int n, int k){
    if (k > 0 && k <= n) return arr[k-1]; 
    else "Invalid Value Of K";
        
}

int main(){
    int arr [] = {7,10,4,3,20,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    sortedArray(arr, n);
    cout<< "Kth Minimum Element Was : " << getMin(arr , n , key) <<endl;
    return 0;
}