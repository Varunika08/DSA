//to check if a string is palindrome or not - leetcode problem 125.//
#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

bool alphanum(char ch){
        if ((ch>='0'&& ch<='9') || (tolower(ch)>='a'&& tolower(ch)<='z')){
            return true;
        }
        return false;
}


    bool isPalindrome(string s) {
        int st=0,end=s.length()-1;
        while (st<=end){
            if (!alphanum(s[st])){
                st++;
            }else if (!alphanum(s[end])){
                end--;
            }else{
                if (tolower(s[st])!=tolower(s[end])){
                    return false;
                }
            st++,end--;
            }
        }
        return true;
    }

int main(){
    string s;
    cout << "enter a string:";
    cin>>s;
    bool ans=isPalindrome(s);
    if (ans){
        cout<<"String is palindrome!";
    }else{
        cout<<"String is not palindrome!";
    }
}