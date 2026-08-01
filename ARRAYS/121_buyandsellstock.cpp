/*to find the best time to buy and sell stock such that there is max
profit. return the max profit obtained - leetcode 121.*/
#include <iostream>
using namespace std;
#include <vector>

int maxProfit(vector<int>& prices) {
        int maxp=0,bestbuy=prices[0];
        int n=prices.size();

        for (int i=1;i<n;i++){
            if (prices[i]>=bestbuy){
                maxp=max(maxp,prices[i]-bestbuy);
            }else{
                bestbuy=min(bestbuy,prices[i]);
            }
        }
        
        return maxp;
}

int main() {
    vector<int> prices = {3,4,5,1,2};
    int ans = maxProfit(prices);
    
    cout << "Maximum profit is: " << ans << endl;
    return 0;
}