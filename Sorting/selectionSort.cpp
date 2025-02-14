#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
  for(int i = 0; i<n-1; i++){
    int mini = i;
    //for comaprison
    for(int j = i+1; j<n; j++){
      if(arr[j] < arr[mini]){
        mini = j;
      }
    }
    //swap
    swap(arr[mini], arr[i]);
  } 
  cout << "After Using selection sort: " << "\n";
  for (int i = 0; i < n; i++)
  {
      cout << arr[i] << " ";
  } 

}

int main(){

  int arr[] = { 12, 10 ,45,3,1,2,77};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << "Before selection sort: " << "\n";
  for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << "\n";
  selectionSort(arr, n);


}
