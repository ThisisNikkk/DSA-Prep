#include<iostream>
using namespace std;
int i = 1;
void printNto1(int n){
    if(i == n+1) return;
    cout<<n-i+1<<endl;
    i++;
    printNto1(n);
}
int main(){
    int n;
    cin >> n;
    printNto1(n);
    return 0;
}