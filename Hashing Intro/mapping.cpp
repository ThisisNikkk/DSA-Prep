#include <iostream>
#include <unordered_map>
using namespace std;
int main(){ 
   int n;
   cin>>n; 
   int arr[n];
   for(int i =0; i<n; i++){
       cin>>arr[i];
   };
    for(int i =0; i<n; i++){
         cout<<arr[i]<<" ";
    };
    cout<<endl;
    //precomputation
    unordered_map<int,int> mpp;
    for(int i = 0; i<n; i++){
        mpp[arr[i]] ++;
    }
    for(auto i: mpp){
         cout<<i.first<<" -> "<<i.second<<endl;
    }


    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<mpp[num]<<endl;
    }
}