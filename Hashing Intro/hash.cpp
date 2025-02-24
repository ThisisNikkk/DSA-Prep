#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr [] = {1,2,3,1,3,2,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    //precomputations
    int hash[13] = {0};
    for(int i =0; i<n; i++){
        hash[arr[i]] += 1;
    }

    //fetching
    int q;
    cout<<"Enter the number of queries: "<<endl;
    cin>>q;
    while(q--){
        int num;
        cout<<"Enter the number to be searched: "<<endl;
        cin>>num;
        cout<<hash[num]<<endl;
    }
}