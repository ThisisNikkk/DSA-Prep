#include<bits/stdc++.h>

using namespace std;
void solve(int arr[], int n) {
  int x = arr[0];
  for(int i = 0 ; i<n; i++){
    arr[i] = arr[i+1];
  }
  arr[n-1] = x;
  for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
  }
}
int main() {
  int n=5;
  
  int arr[]= {1,2,3,4,5};
  solve(arr, n);
}

