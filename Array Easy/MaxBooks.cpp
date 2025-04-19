#include<bits/stdc++.h>
using namespace std;

int maxBooksOnShelf(vector<int> &books){
    int n = books.size();
    if(n == 0) return 0;
    int count = 1;
    for(int i =1; i<n; i++){
        if(books[i] > books[i-1]){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<int> books(n);
    for(int i = 0; i<n; i++){
        cin>>books[i];
    }
    cout<<"Answer : " <<maxBooksOnShelf(books)<<endl;

    return 0;
}