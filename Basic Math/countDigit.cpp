#include<iostream>
#include<math.h>

using namespace std;

int main(){
    // int n = 1234;
    // int count = 0;
    // while(n>0){
    //     int digit = n%10; // Remainder Milega
    //     count++; // Count Mei Increment Tab Hoga Jab Ek Digit Ka Count Hogaya
    //     n = n/10; // Update N
    // }
    // cout<<count;

    int n = 123;
    int count = int(log10(n)+1);
    cout<<count;

}