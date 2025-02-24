


#include<bits/stdc++.h>
using namespace std;
    int getSecondSmallest(vector<int> &arr) {
    int n = arr.size();
    if(n < 2) return -1;
    int min = *min_element(arr.begin(), arr.end());
    int min2 = INT_MAX;
    for(int i : arr){
        if(i>min && i < min2){
            min2 = i;
        }
    }return (min2 == INT_MAX) ? -1 : min2;
}
    int getSecondLargest(vector<int> &arr) {
    int n = arr.size();
    if(n < 2) return -1;
    int max = *max_element(arr.begin(), arr.end());
    int max2 = INT_MIN;
    for(int num : arr) {
        if(num < max && num > max2) {
            max2 = num;
        }
    }
    return (max2 == INT_MIN) ? -1 : max2;
    }

int main() {
    vector<int>arr={1,2,4,7,7,5};  
    cout<<"Second Smallest is "<<getSecondSmallest(arr)<<endl;
    cout<<"Second largest is "<<getSecondLargest(arr)<<endl;
    return 0;
}


