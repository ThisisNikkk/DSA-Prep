#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //precomputation
    int hash[13]={0};
    for(int i = 0; i<n; i++){
        hash[arr[i]] += 1;
    }

    //fetching
    int x;
    cin>>x;
    cout<<hash[x];
}