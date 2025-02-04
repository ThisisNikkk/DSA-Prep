#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int n = 1634;
    int og = n; // sum ke liye
    int k = to_string(n).length();
    int sum = 0;

    while(n>0){
        int lastDigit = n%10;
        sum = sum + pow(lastDigit,k);
        n=n/10;
    }
    if(sum == og) cout << "True";
    else cout << "False";

}