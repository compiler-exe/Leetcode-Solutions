class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<long long> left_val(k);
        vector<long long> right_val(k);
        for (int j = 0; j < k; ++j) {
            long long m = (long long)mul - k + 1 + j;
                       long long left_num = nums[j];
            left_val[j] = max(left_num, left_num * m);

            long long right_num = nums[n - k + j];
            right_val[j] = max(right_num, right_num * m);
        }
        long long current_sum = 0;
        for (int j = 0; j < k; ++j) {
            current_sum += right_val[j];
        }
        long long max_sum = current_sum;
        for (int i = 0; i < k; ++i) {
            current_sum = current_sum + left_val[i] - right_val[i];
            max_sum = max(max_sum, current_sum);
        }
        return max_sum;
    }
};
