/*sort them in place so that objects of the same color are adjacent-
the array contains numbers 0,1,2 only representing three colors.
leetcode problem 75.- DNF (Dutch National Flag) ALGORITHM */

#include <iostream>
using namespace std;
#include <vector>

void sortcolors(vector<int>&arr){
    int n=arr.size();
    int low=0,mid=0,high=n-1;
    while (mid<=high){
        if (arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }else if (arr[mid]==1){
            mid++;
        }else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    return;
}

int main() {
    vector<int> nums = {2,0,2,1,1,0};
    sortcolors(nums);
    
    for (int print:nums){
        cout << print << "  ";
    }
    cout << endl;
    return 0;
}