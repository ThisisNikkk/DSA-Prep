#include<iostream>
using namespace std;

int i = 1;
void print1toN(int n){
    if(i == n+1) return;
    cout<<i<<endl;
    i++;
    print1toN(n);
}

int main(){
    int n;
    cin>>n;
    print1toN(n);
}