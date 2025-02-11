#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int j){
    if(i>=j) return true;
    return (s[i]==s[j] && isPalindrome(s,i+1,j-1));
}

int main(){

    string s = "A man, a plan, a canal: Panama";

    string filtered;
    for(char c: s){
        if(isalnum(c)){
            filtered += tolower(c);
        }
    }
    int n = filtered.size();
    cout<<isPalindrome(filtered,0,n-1);
}