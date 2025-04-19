#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& arr){
    int n = arr.size();
    int count = 0;
    int maxCount = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 1){
            count+=1;
            maxCount = max(count, maxCount);
        }
        else{
            count = 0;
        }
    }return maxCount;
}

int main(){
    vector<int> arr = {1,1,0,1,1,1};
    cout << "Maximum Consecutive One's  : " << findMaxConsecutiveOnes(arr) << endl;
    return 0;
}