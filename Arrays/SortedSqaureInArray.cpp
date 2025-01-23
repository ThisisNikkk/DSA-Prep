#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Approach 1 : Using Two Pointers and Abs Function
vector<int> sortedSquares(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n);
    int left = 0, right = n -1;
    int index = n - 1;;
    while(left <= right){
        if(abs(arr[left]) > abs(arr[right])){
            ans[index] = arr[left] * arr[left];
            left++;

        } else {
            ans[index] = arr[right] * arr[right];
            right--;
        }
        index-- ;
    } return ans;
}

// Approach 2 : Using Sorting
vector<int> sortedSqaure(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        arr[i] = arr[i] * arr[i];
    }
    sort(arr.begin(), arr.end());
    return arr;
}

int main(){
    vector<int> arr = {-4, -1, 0, 3, 10};
    vector<int> arr2 = {-4, -1, 0, 3, 10};
    vector<int> ans = sortedSqaure(arr);
    vector<int> ans2 = sortedSquares(arr2);
    for(int i : ans){
        cout << i << " " ;
    }
    for(int i : ans2){
        cout << i << " " ;
    }
}