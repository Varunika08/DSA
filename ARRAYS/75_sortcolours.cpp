/*sort them in place so that objects of the same color are adjacent-
leetcode problem 75.*/
#include <iostream>
using namespace std;
#include <vector>

void sortColors(vector<int>& nums) {
        int n=nums.size();
        int c0=0,c1=0,c2=0;

        for (int i=0;i<n;i++){
            if (nums[i]==0){
                c0++;
            }
            else if (nums[i]==1){
                c1++;
            }
            else if (nums[i]==2){
                c2++;
            }
        }

        int idx=0;                //overwrite
        for (int i=0;i<c0;i++){
            nums[idx++]=0;
        }
        for (int i=0;i<c1;i++){
            nums[idx++]=1;
        }
        for (int i=0;i<c2;i++){
            nums[idx++]=2;
        }
        return;
}
int main() {
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    
    for (int print:nums){
        cout << print << "  ";
    }
    cout << endl;
    return 0;
}