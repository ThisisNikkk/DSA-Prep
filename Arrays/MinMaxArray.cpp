//Problem - Return The Maximum and Minimum element From a array of N size.

#include <iostream>
using namespace std;


int getMax(int arr[], int n){
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }  return max;
}

int getMin(int arr[], int n){
    int min = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }  return min;
}

int main (){

    int size;
    cout << "Enter The Size Of Array : "<< endl;
    cin>>size;

    int arr[10];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Elements"<< endl;
        cin >> arr[i];
    }

    cout << "Maximum Value : " << getMax(arr,size) <<endl;
    cout << "Minimum Value : " << getMin(arr,size) <<endl;

}