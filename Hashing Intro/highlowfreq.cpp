#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
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

    unordered_map<int, int> mpp; 
    for(int i=0; i<n; i++){
        mpp[arr[i]]+=1;
    }

    int maxFreq = 0;
    int minFreq = 1;
    int maxEle = 0;
    int minEle = 0;

    for(auto i: mpp){
        int element = i.first;
        int freq = i.second;
        if(freq>maxFreq){
            maxFreq = freq;
            maxEle = element;
        }
        if(freq<=minFreq){
            minFreq = freq;
            minEle = element;
        }
    }
    cout<<"Element: "<<maxEle<<" Max Freq: "<<maxFreq<<endl;
    cout<<"Element: "<<minEle<<" Min Freq: "<<minFreq<<endl;

}
