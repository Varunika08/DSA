//to reverse a string - leetcode problem 344.//
#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

int main(){
    string s;
    cout << "enter a string:";
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<"reversed string is : "<< s <<endl;
}