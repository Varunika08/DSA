//to perform string compression - type 1 - leetcode problem 443.//

// ['a','a','a','b','b','c'] -----> ['a','3','b','2','c'] ----> 5

#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <vector>


int compress(vector<char>& chars) {
        int n=chars.size();
        int idx=0;             //to overwrite 
        int i=0;               //to read
        while (i<n){
            char ch = chars[i];         //saves current char as ch at i position 
            int count =0;               //to check how many times that ch repeats
            while (i<n && chars[i]==ch){            
                count++,i++;      //increase count if same char repeated and move to next index
            }
            if (count ==1){
                chars[idx++]=ch;    //write only char
            }else{
                chars[idx++]=ch;                 //first write char
                string str =to_string(count);    //then write the count of the ch in string form.
                for (char digit : str){          
                    chars[idx++]=digit;        
                }
            } 
        }
        return idx;
    }

int main(){
    string s;
    cout << "enter a string:";
    cin>>s;
    vector<char> chars(s.begin(), s.end());         //convert string to vector.
    int ans=compress(chars);
    cout<<"compressed string is : "<< ans <<endl;
}