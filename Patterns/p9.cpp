#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    for(int i = 0; i <=n ; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i =0; i<=n; i++){
        for(int j = 0; j<=n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}