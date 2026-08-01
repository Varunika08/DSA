/*to print all elements of a matrix in spiral form - leetcode 54.*/
#include <iostream>
using namespace std;
#include <vector>

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<int> ans;

        int strow=0,endrow=m-1,stcol=0,endcol=n-1;

        while (strow<=endrow && stcol<=endcol){
            for (int i=stcol;i<=endcol;i++){
                ans.push_back(matrix[strow][i]);
            }
            
            for (int j=strow+1;j<=endrow;j++){
                ans.push_back(matrix[j][endcol]);
            }
            
            for (int i=endcol-1;i>=stcol;i--){
                if (strow==endrow){                //else element gets printed twice.
                    break;
                }
                ans.push_back(matrix[endrow][i]);
            }
        
            for (int j=endrow-1;j>=strow+1;j--){
                if (stcol==endcol){                //else element gets printed twice.
                    break;
                }
                ans.push_back(matrix[j][stcol]);
            }
            strow++;
            endrow--;
            stcol++;
            endcol--;
        }
        return ans;
}

int main() {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans=spiralOrder(matrix);
    for (int num:ans){
        cout << num << "  ";
    }
    cout<<endl;
    
    return 0;
}