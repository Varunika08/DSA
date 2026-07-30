//to find square root of a non negative number using binary search- leetcode 69.
#include <iostream>
using namespace std;
#include <vector>

int sqrt(int x){
    int st=1,end=x;
    int ans=0;
    if (x==0 || x==1){     //base case
        return x;
    }
    while (st<=end){
        int mid=st+(end-st)/2;
        int square=mid*mid;
        if (square==x){
            return mid;
        }else if(square<x){      //move right
            ans=mid;
            st=mid+1;
        }else{                   //move left
            end=mid-1; 
        }
    }
    return ans;
}

int main(){
    int x;
    cout<<"enter a number x:";
    cin>>x;
    int ans=sqrt(x);
    if (x<0){
        cout<<"enter non negative number";
    }else{
        cout<<"the rounded square root of "<< x << " is " <<ans<<endl;
    }
}