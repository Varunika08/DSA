/*to generate a fibonacci number such that each number is the sum of the two 
preceding ones - leetcode problem 509.*/
#include <iostream>
using namespace std;

int fib(int n) {
        if (n==1){        //base case
            return 1;
        }
        if (n==0){        //base case
            return 0;
        }
        int f=fib(n-1)+fib(n-2);
        return f;
}

int main(){
    int n;
    cout<<"enter number n: ";
    cin>>n;
    cout<<"The fibonacci number is : "<<fib(n)<<endl;
}
