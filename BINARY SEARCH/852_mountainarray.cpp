//return the peak element of a mountain array- leetcode problem 852.
#include <iostream>
using namespace std;
#include <vector>



int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int st=1,end=n-2;

        while (st<=end){
            int mid=st+(end-st)/2;
            
            if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){    //peak element
                return mid;
            }else if(arr[mid]>arr[mid-1]){    //increasing side- right
                st=mid+1;
            }else{
                end=mid-1;                    //decreasing side - left
            }
        }

        return -1;
}

int main() {
    vector<int> nums = {0,10,5,2};
    int ans = peakIndexInMountainArray(nums);
    
    cout << "Index: " << ans << endl;
    return 0;
}