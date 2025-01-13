#include<iostream>
using namespace std;

int linearSearch(int arr[], int n , int k){
    for (int i = 0; i < n; i++)
    {
        if (k == arr[i])
        {
            return i;
        }
        
    }return -1;
      
}

int main(){

    int arr[] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 5;

    int res = linearSearch(arr , n , key);
    if (res !=1) cout<< "Element Found At Index : "<< res <<endl;
    else cout<<"Not Found"<<endl;


    return 0;
}