#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target){
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i]+arr[j] == target) return {i, j};
        }
    }return {};
}

int main(){

    vector <int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = twoSum(arr, target);
    for(int i : ans){
        cout << i << " ";
    }

    return 0;
}