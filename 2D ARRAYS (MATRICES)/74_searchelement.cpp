/*to search target element in a 2D array - leetcode 74.*/
#include <iostream>
using namespace std;
#include <vector>

bool searchtarget(vector<vector<int>>& matrix, int target,int row){
        int n=matrix[0].size();    //to search the target in which column of a row
        int st=0,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if (target==matrix[row][mid]){    //found the target
                return true;
            }else if (target>matrix[row][mid]){    //move right
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
}
    
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(); //row
        int n=matrix[0].size();    //col
        int st=0,end=m-1;
        while(st<=end){
            int mid=st+(end-st)/2;    //row = mid
            if (target>=matrix[mid][0]&&target<=matrix[mid][n-1]){
                return searchtarget(matrix,target,mid); 
            }else if(target>matrix[mid][n-1]){    //move right
                st=mid+1;
            }else{                             //move left
                end=mid-1;
            }
        }
        return false;
}

int main() {
    vector<vector<int>> matrix = {{1, 3, 5, 7},{10, 11, 16, 20},{23, 30, 34, 60}};
    int target=34;
    bool ans = searchMatrix(matrix, target);
    
    if (ans){
        cout << "Target element found";
    }else{
        cout << "Target element not Found";
    }

    return 0;
}