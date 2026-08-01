//to find the minimum element in a rotated sorted array using binary search
//leetcode problem - 153.
#include <iostream>
using namespace std;
#include <vector>

int findMin(vector<int>& nums) {
        int n=nums.size();
        int st=0,end=n-1;

        int minval=nums[0];

        if (n==1){         //base case
            return nums[0];
        }
        while (st<=end){    
            int mid=st+(end-st)/2;

            if (nums[mid]<minval){
                minval=nums[mid];
            }
            if (nums[mid]>=nums[0]){  //move right- left is sorted 
                st=mid+1; 
            }else{                   //move left - right is sorted
                end=mid-1;
            }
        }
       return minval;
}

int main() {
    vector<int> nums = {3,4,5,1,2};
    int ans = findMin(nums);
    
    cout << "Minimum element is: " << ans << endl;
    return 0;
}
