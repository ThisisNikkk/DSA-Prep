#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {
       int ans = nums[0];
       int total = 0;
       for(int i : nums){
            if(total < 0) total = 0;
            total +=i;
            ans = max(ans, total);
       }
       return ans;
    }

int main() {
    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum is: " << maxSubArray(nums1) << endl;
}