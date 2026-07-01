#include <vector>
#include <algorithm>
#include <climits>
class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        long long  maxSum = INT_MIN;
        long long  currentSum =0;
        for(int i=0;i<nums.size();i++){
            long long  v1 = nums[i];
            long long v2 = currentSum + nums[i];
            currentSum = max( v1 ,v2);
            maxSum = max(maxSum , currentSum);
        }
        return maxSum;
    }
};
