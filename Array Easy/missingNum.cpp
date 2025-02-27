#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr) {
    int n = arr.size();
    int number = 0;

    for (int i=0; i<n;i++){
        number ^= arr[i];
    }

    for (int i = 0; i <= n; i++){
        number ^= i;
    }

    return number;

}

int main(){
    vector<int>arr = {1,2,4,5};
    cout << missingNumber(arr) << endl;
    return 0;
}