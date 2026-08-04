//to reverse only the letters of a string- only alpha char to be reversed
// - leetcode problem 917.
#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

string reverseOnlyLetters(string s) {
        int right=s.length()-1;
        int left=0;

        while (left<right){
            if (!isalpha(s[left])){
                left++;
            }else if (!isalpha(s[right])){
                right--;
            }else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
    return s;
}

int main(){
    string s;
    cout << "enter a string:";
    cin>>s;
    string ans =reverseOnlyLetters(s);
    cout<<"reversed string is : "<< ans <<endl;
}