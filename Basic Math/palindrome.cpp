#include<iostream>
using namespace std;

int main(){
    int n = 124321;
    int temp = n;
    int rev = 0;
    while(n>0){
        int lastDigit = n%10;
        rev = rev*10 + lastDigit;
        n = n/10;
    }
    if(rev == temp) cout << "True";
    else cout << "False";
}