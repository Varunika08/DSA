/*to reverse a string - type 2 - leetcode problem 344.

Given a string s and an int k, reverse the first k characters for every 2k 
characters counting from the start of the string.

If there are fewer than k characters left, reverse all of them. If there are 
less than 2k but greater than or equal to k characters, then reverse the first 
k characters and leave the other as original.*/

#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

int main(){
    string s;
    cout << "enter a string:";
    cin>>s;

    int k;
    cout << "enter an integer k:";
    cin>>k;

    int n=s.size();
    for (int i=0;i<n;i+=2*k){
        if (n<k+i){  //If there are fewer than k characters left, reverse all.
            reverse(s.begin()+i,s.end());
        }else{
            reverse(s.begin()+i,s.begin()+k+i);
        }
    }
    cout<<"reversed string is : "<< s <<endl;
}