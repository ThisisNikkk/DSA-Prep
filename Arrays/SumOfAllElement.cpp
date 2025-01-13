#include<iostream>
using namespace std;

int getSum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = arr[i] + sum;
    }

    return sum;
}
int main(){

    int n;
    cout <<"Enter The Number Of Elements"<<endl;
    cin >> n;
    int arr[5]={};
    cout << "Enter The Elements"<< endl;
    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements of the array are: "; 
    for(int i = 0; i < n; i++) 
    { 
        cout << arr[i] << " "; 
    }


    cout << "Sum Of All The Element : " << endl;
    cout << getSum(arr,n) << endl;

return 0;
}