/*to remove all occurences of an element and return the remaining number of
elements - leetcode problem 27.*/

#include <iostream>
using namespace std;
#include <vector>

 int removeElement(vector<int>& nums, int val) {
        int left=0;
        int right=nums.size()-1;
        while (left<=right){
            if (nums[left]==val){
                nums[left]=nums[right];   //overwrite (swap) the val 
                right--;
            }else{
                left++;
            }
        }
        return left;
}

int main() {
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int k;
    cout<<"Enter element to remove:";
    cin>>k;

    int ans = removeElement(nums,k);
    
    cout << "no. of elements present after removing 'k' element are: " << ans << endl;
    return 0;
}