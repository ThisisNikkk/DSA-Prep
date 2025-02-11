#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    //precomputations
    int hash[26]={0};
    for(int i =0; i<s.size(); i++){
        hash[s[i]-'a'] +=1;
    }

    char c;
    cin>>c;

    //fetching
    cout<<hash[c -'a']<<endl;

}