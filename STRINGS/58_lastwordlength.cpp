//to find the length of the last word - leetcode problem 58.//
#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

int lengthOfLastWord(string s) {
        int n=s.length()-1;
        int count=0;
        while (n>0 && s[n]==' '){
            n--;
        }
        while (n>=0 && s[n]!=' '){
            count++;
            n--;
        }
        return count;
}

int main(){
    string s;
    cout << "enter a string:";
    getline(cin,s);
    cout<<"length of the last word is : "<< lengthOfLastWord(s) <<endl;
}