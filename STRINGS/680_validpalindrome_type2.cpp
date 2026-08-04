/*to check if a string is palindrome or not- type 2- you can delete atmost 1 char
 to make it palindrome. - leetcode problem 125.*/

#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

bool chknext(string& s, int left, int right){
        while (left<=right){
            if (s[left]!=s[right]){
                return false;           
            }
            left++, right--;
        }
        return true;
}

    bool validPalindrome(string s) {
        int st=0,end=s.length()-1;
        while (st<=end){
            if (s[st]!=s[end]){
                return chknext(s,st+1,end)||chknext(s,st,end-1);   //check substring by deleting 1 char
            }
            st++,end--;
        }
        return true;
    }


int main(){
    string s;
    cout << "enter a string:";
    cin>>s;
    bool ans=validPalindrome(s);
    if (ans){
        cout<<"String is palindrome!";
    }else{
        cout<<"String is not palindrome!";
    }
}