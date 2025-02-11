#include<iostream>
using namespace std;

int sumofNum(int i , int sum){
    if(i<1) return sum;
    return sumofNum(i-1 ,sum + i);
}

int sumofN(int n){
    if(n==0) return 0;
    return n + sumofN(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<sumofN(n);
    return 0;
}