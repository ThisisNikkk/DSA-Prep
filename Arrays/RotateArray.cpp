#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> & nums, int k){
    int n = nums.size();
    k = k % n;
    vector<int> rotated(n);
    for(int i = 0; i < n; i++){
        rotated[(i + k) % n] = nums[i];
    }
    nums = rotated;
}

int main(){
    vector<int> nums = {-1, -100, 3, 99};
    int k = 2;
    rotate(nums, k);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}