#include <vector>
#include <algorithm>
#include <climits>
class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int max_sum = INT_MIN;
        int current_sum = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); ++right) {
            current_sum += nums[right];
            
            max_sum = std::max(max_sum, current_sum);

            while (current_sum < 0 && left <= right) {
                current_sum -= nums[left];
                left++;
            }
        };

        return max_sum;
    }
};
