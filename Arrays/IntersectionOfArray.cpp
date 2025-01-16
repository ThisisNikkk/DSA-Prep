#include<iostream>
#include<vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m){
    int i = 0 , j = 0;
    vector<int> ans;
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++ , j++;
        }
        else if (arr1[i] > arr2[j]){
            j++;
        }
        else i++;
    }
    return ans;

}

int main(){

    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    int n = arr1.size();
    vector<int> arr2 = {2, 2, 3, 3};
    int m = arr2.size();
    vector<int> interesection = findArrayIntersection(arr1 , n , arr2 , m);
    for( int i : interesection){
        cout << i << " ";
    }
    return 0;
}