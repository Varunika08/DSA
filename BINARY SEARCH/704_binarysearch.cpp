//search target element using simple binary search - leetcode problem 704.
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

        return -1;           //to insert if target not found
}

int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    int ans = searchInsert(nums, target);
    
    cout << "Index: " << ans << endl;
    return 0;
}
