/*search target element using binary search for elements arranged in 
rotated sorted array form- leetcode problem 33.*/
#include <iostream>
using namespace std;
#include <vector>

int search(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0,end=n-1;

        while (st<=end){
            int mid=st+(end-st)/2;
            if (nums[mid]==target){
                return mid;
            }
            if (nums[mid]>=nums[st]){
                if (target>=nums[st]&& target<=nums[mid]){      //left sorted
                    end=mid-1;
                }else{
                    st=mid+1;
                }
            }else{
                if (target>=nums[mid] && target<=nums[end]){     //right sorted
                    st=mid+1;
                }else{
                    end=mid-1;
                }
            } 
        }
        return -1;
}

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target=0;
    int ans = search(nums,target);
    
    cout << "Index: " << ans << endl;
    return 0;
}