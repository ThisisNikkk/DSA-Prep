/*
    I/O - {1,2,3,4,5}
    O/P - {2,1,4,3,5}
*/

#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }   
}


void swapElement(int arr[],int n){
    for (int i = 0; i < n; i+=2)
    {
        swap(arr[i], arr[i+1]);
    }   
}

//Another Approach
/* void swapElements(int arr[], int n){
    int start = 0;
    int end = start + 1;
    while (end< n)
    {
        swap(arr[start], arr[end]);
        start+=2, end+=2;
    }   
} */

int main(){

    int arr [] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    swapElement(arr,n);
    printArray(arr,n);

    return 0;
}