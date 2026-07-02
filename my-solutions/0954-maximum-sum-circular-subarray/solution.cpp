class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total_sum = 0;
        int current_max = 0;
        int max_sum = nums[0];
        int current_min = 0;
        int min_sum = nums[0];
        for (int i=0;i<nums.size();i++) {
            total_sum += nums[i];
            current_max = std::max(current_max + nums[i], nums[i]);
            max_sum = std::max(max_sum, current_max);
            current_min = std::min(current_min + nums[i], nums[i]);
            min_sum = std::min(min_sum, current_min);
        }
        if (max_sum > 0) {
            return std::max(max_sum, total_sum - min_sum);
        } else {
            return max_sum;
        }
    }
};
