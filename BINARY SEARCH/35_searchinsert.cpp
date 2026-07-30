//search and insert position - leetcode problem 35.
#include <iostream>
using namespace std;
#include <vector>

int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0,end=n-1;

        while(st<=end){
            int mid=st+(end-st)/2;
            if (nums[mid]==target){
                return mid;
            }else if (nums[mid]<target){         //right
                st=mid+1;
            }else if (nums[mid]>target){         //left
                end=mid-1;
            }   
        }

        return st;           //to insert if target not found
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;
    int ans = searchInsert(nums, target);
    
    cout << "Index: " << ans << endl;
    return 0;
}
