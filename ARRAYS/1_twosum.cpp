/*to find the pair of indices whose value sum up to a given target value
brute force method- leetcode 1.*/
#include <iostream>
using namespace std;
#include <vector>

vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
}

int main() {
    vector<int> nums = {3,4,5,1,2};
    int target=9;
    vector<int> ans=twoSum(nums,target);
    
    cout << "the two indices are: " << ans[0] << " and " << ans[1] << endl;
    return 0;
}