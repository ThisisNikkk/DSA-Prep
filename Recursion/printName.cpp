#include<iostream>
using namespace std;
int i = 0;
void printName(int n){
    if(i == n) return;
    cout<< "Nikhil Siwan" << endl;
    i++;
    printName(n);
}

int main(){
    int n;
    cin >> n;
    printName(n);
}

