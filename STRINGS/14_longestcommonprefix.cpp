//to find the longest common prefix - leetcode problem 14.//
#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <vector>

string longestCommonPrefix(vector<string>& strs) {
        for (int i=0;i<strs[0].length();i++){        //first word.
            char ch=strs[0][i];               //i letter of first word.

            for (int j=1;j<strs.size();j++){         //rest of the words
                if (strs[j][i]!=ch){   
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
}

int main(){
    vector<string> strs = {"flower", "flow", "flight"};
    string ans=longestCommonPrefix(strs);
    cout<<"the longest common prefix in the given strings are : "<< ans <<endl;
    return 0;
}