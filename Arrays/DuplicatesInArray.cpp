#include<iostream>
using namespace std;

int findDuplicate(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    for(int i = 1; i < n ; i++){
        ans = ans ^ i;
    }
    return ans;
}

int main(){

    int arr[] = {8, 7, 2, 5, 4, 7, 1, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findDuplicate(arr,n);

    return 0;
}