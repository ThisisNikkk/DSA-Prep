#include<iostream>
using namespace std;

int main(){
    int n = 1234;
    //OP - 4321
    int reverse = 0;
    while(n>0){
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n=n/10;
    }
    cout<<reverse;
}