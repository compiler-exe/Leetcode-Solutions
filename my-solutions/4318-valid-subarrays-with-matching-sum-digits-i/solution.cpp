class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        int valid_count = 0;
        for (int i = 0; i < n; ++i) {
            long long current_sum = 0; 
            for (int j = i; j < n; ++j) {
                current_sum += nums[j];
                long long temp = std::abs(current_sum);
                int last_digit = temp % 10;
                if (last_digit == x) {
                    int first_digit = 0;
                    if (temp == 0) {
                        first_digit = 0;
                    } else {
                        while (temp >= 10) {
                            temp /= 10;
                        }
                        first_digit = temp;
                    }
                    if (first_digit == x) {
                        valid_count++;
                    }
                }
            }
        }
        
        return valid_count;
    }
};
