#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    //Input in array
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    //Output
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //precomputaion

    int hash[13]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    } 

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<hash[num]<<endl;
    }
    
    


}