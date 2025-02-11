#include<iostream>
using namespace std;

void printSomething(){
    cout<<"Hello World"<<endl;
    printSomething();
}

int main(){
    printSomething();
    return 0;
}