#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    cout<<endl;

    for(int i = 0; i <n ; i++){
        //space
        for(int j =0; j < n-i-1; j++){
            cout<< " ";
        }
        for(int j =0; j < (2*i+1); j++){
            cout << "*";
        }
        for(int j =0; j < n-i-1; j++){
            cout << " ";
        }
        cout<<endl;
    }


    return 0;
}